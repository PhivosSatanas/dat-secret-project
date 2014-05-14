/*********************************************
 * Kouklakis Konstantinos	kuklakis 	2154 *
 * Maninakis Konstantinos	maninak		2273 *
 *********************************************/
%{
	#include "../include/manage.h"
	#include "../include/SymbolTable.h"
	
	int yyerror (const char* yaccProvidedMessage);
	int yylex (void);
%}

%start program

%expect 1

%union{
	char * 			stringVal;
	int				intVal;
	double 			realVal;
	struct Symbol * symbolVal;
	struct Expr   * exprVal;
}

%token IF ELSE WHILE FOR NOT RETURN BREAK CONTINUE LOCAL DBLCOLON TRUE FALSE NIL FUNCTION EQ NOT_EQ DBLDOT STR PLUS_PLUS MINUS_MINUS GREATER_EQ LESS_EQ AND OR UNRECOGNIZED

%token<stringVal> 	ID
%token<realVal> 	NUMBER

%type<stringVal>	funcname	STR
%type<intVal>		funcbody	M
%type<symbolVal> 	funcdef		funcprefix
%type<exprVal>		lvalue		tableitem	primary		assignexpr
					call		term		tablemake	const	
					expr		elist		stmts		stmt		
					BREAK		CONTINUE
%left	'='
%left	OR
%left	AND
%nonassoc	EQ NOT_EQ
%nonassoc	'>' GREATER_EQ '<' LESS_EQ
%left	'+' '-'
%left	'*' '/' '%'
%right	NOT PLUS_PLUS MINUS_MINUS UMINUS
%left	'.' DBL_DOT
%left	'[' ']'
%left	'(' ')'

%%

program:	stmts					{ manage_stmts						(); } ;

stmts:	stmts stmt					{ manage_stmts_stmt					(); }
		| /* empty */				{ manage_stmts_empty				(); }
		;

stmt:	expr';'						{ manage_stmt_expr				  ($1); }
		| ifstmt					{ manage_stmt_ifstmt				(); }
		| whilestmt					{ manage_stmt_whilestmt				(); }
		| forstmt					{ manage_stmt_forstmt				(); }
		| returnstmt				{ manage_stmt_returnstmt			(); }
		| BREAK ';'					{ manage_stmt_BREAK					(); }
		| CONTINUE ';'				{ manage_stmt_CONTINUE				(); }
		| block						{ manage_stmt_block					(); }
		| funcdef					{ manage_stmt_funcdef				(); }
		| UNRECOGNIZED				{ manage_stmt_UNRECOGNIZED			(); }
		| error						{ manage_stmt_error					(); }
		| ';'						{ manage_stmt_semicolumn			(); }
		;



expr:	assignexpr					{ $$ = manage_expr_assignexpr	  ($1); }
		| expr '+' expr				{ $$ = handle_expr_op_expr($1,'+', $3); }		
		| expr '-' expr				{ $$ = handle_expr_op_expr($1,'-', $3); }	
		| expr '*' expr				{ $$ = handle_expr_op_expr($1,'*', $3); }	
		| expr '/' expr				{ $$ = handle_expr_op_expr($1,'/', $3); }
		| expr '%' expr				{ $$ = handle_expr_op_expr($1,'%', $3); }
		| expr '>' expr				{ $$ = handle_expr_gr_expr($1, $3);		}
		| expr GREATER_EQ expr		{ $$ = handle_expr_gr_eq_expr($1, $3);	}
		| expr '<' expr				{ $$ = handle_expr_ls_expr($1, $3);		}
		| expr LESS_EQ expr			{ $$ = handle_expr_ls_eq_expr($1, $3);	}
		| expr EQ expr				{ $$ = handle_expr_eq_expr($1, $3);		}
		| expr NOT_EQ expr			{ $$ = handle_expr_not_eq_expr($1, $3);	}
		| expr AND M expr			{ $$ = handle_expr_and_expr($1,$3,$4);	}
		| expr OR M expr			{ $$ = handle_expr_or_expr($1,$3,$4);	}
		| term						{ $$ = manage_expr_term($1); 			}
		;
		
M:									{ $$ = handle_boolean_M				();	};

term:	'(' expr ')'				{ $$ = manage_term_expr_parenthesis($2);}
		| '-' expr %prec UMINUS		{ $$ = handle_term_uminus_expr($2); 	}
		| NOT expr					{ $$ = handle_term_not_expr($2); 		}
		| PLUS_PLUS lvalue			{ $$ = handle_op_op_lvalue($2, '+');	}
		| lvalue PLUS_PLUS			{ $$ = handle_lvalue_op_op($1, '+');	}
		| MINUS_MINUS lvalue		{ $$ = handle_op_op_lvalue($2, '-');	}
		| lvalue MINUS_MINUS		{ $$ = handle_lvalue_op_op($1, '-');	}
		| primary					{ $$ = manage_term_primary($1);			}
		;

assignexpr: 	lvalue '=' expr		{ $$ = manage_assignexpr_lvalue_assign_expr($1, $3);};

primary:lvalue						{ $$ = manage_primary_lvalue($1); 		}
		| call						{ manage_primary_call				(); }
		| tablemake					{ manage_primary_tablemake			(); }
		| '(' funcdef ')'			{ manage_primary_funcdef_parenthesis(); }
		| const						{ manage_primary_const($1);}
		;

lvalue:	ID							{ $$ = manage_lvalue_ID				($1); }
		| LOCAL ID					{ $$ = manage_lvalue_LOCAL_ID		($2); }
		| DBLCOLON ID				{ $$ = manage_lvalue_DBLCOLON_ID	($2); }
		| tableitem					{ manage_lvalue_tableitem			(); }
		;

tableitem: lvalue '.' ID			{ $$ = manage_tableitem_lvalue_dot_ID($1, $3); }
		| lvalue '[' expr ']'		{ $$ = manage_tableitem_lvalue_brackets_expr($1, $3); }
		| call '.' ID				{ manage_tableitem_call_dot_ID			(); }
		| call '[' expr ']'			{ manage_tableitem_call_brackets_expr	(); }
		;

/*call: lvalue callsuffix				{ $$ = manage_call_lvalue_callsuffix($1, $2);}

==================================================================================== */
call:	call '(' elist ')'			{ manage_call_call_elist_parenthesis(); }
		| lvalue callsuffix			{ manage_call_lvalue_callsuffix		(); }
		| '(' funcdef ')' '(' elist ')' { manage_call_funcdef_parenthesis_elist_parenthesis();}
		;

callsuffix:	normcall				{ manage_callsuffix_normcall		(); }
		| 	methodcall				{ manage_callsuffix_methodcall		(); }
		;

normcall:	'(' elist ')'			{ manage_normcall_elist_parenthesis	(); } ;

methodcall:	DBL_DOT ID '(' elist ')'{ manage_methodcall_DBL_DOT_ID_elist_parenthesis();}
		; 

elist:		expr exprs				{ manage_elist_expr_exprs			(); }
		| 	/*EMPTY*/				{ manage_elist_empty				(); }
		;

exprs:		',' expr exprs			{ manage_exprs_comma_expr_exprs		(); }
		| 	/* empty */				{ manage_exprs_empty				(); }
		;
 
tablemake:	'[' elist ']'			{ manage_tablemake_squarebr_elist	(); }
		| 	'[' indexed ']'			{ manage_tablemake_squarebr_indexed	(); }
		;

indexed: indexedelem indexedelems{ manage_indexed_indexedelem_indexedelems();};

indexedelems:   ',' indexedelem indexedelems { manage_indexedelems_comma_indexedelem_indexedelems();}
		| /* empty */				{ manage_indexedelems_empty			(); }
		;

indexedelem: '{' expr ':' expr '}' { manage_indexedelem_brackets_expr_column_expr();};

block:		'{' { currentScope++; } stmts '}'
			{
				hide();
				currentScope--;
				manage_block_brackets_stmts();
			};

funcdef:	funcprefix funcargs funcbody { $$ = manage_funcdef_funcprefix_funcargs_funcbody($1, $3); };

funcprefix: FUNCTION funcname { 
				$$ = manage_funcprefix_FUNCTION_funcname($2);
				$$->iadress = nextquadlabel();
			};

funcname: ID { $$ = manage_funcname_ID($1); }
		| /* empty */ { $$ = manage_funcname_empty(); }
		;

funcargs: '(' idlist ')' { manage_funcargs_PAR_idlist_PAR(); } ;

funcbody: block { manage_funcbody_block(&$$); } ;

const:	NUMBER						{ $$ = manage_const_NUMBER($1); 		}
		| STR						{ $$ = manage_const_STR($1); 			}
		| NIL						{ $$ = manage_const_NIL(); 				}
		| TRUE						{ $$ = manage_const_TRUE(); 			}
		| FALSE						{ $$ = manage_const_FALSE(); 			}
		;

idlist:	ID ids						{ manage_idlist_ID_ids				($1); }
		| /* empty */				{ manage_idlist_empty				(); }
		;

ids:	',' ID ids					{ manage_ids_comma_ID_ids			($2); }
		| /* empty */				{manage_ids_empty					(); }
		; 

ifstmt:	ifexpr ifsuffix				{ manage_ifstmt_ifexpr_ifsuffix(); };

ifexpr: IF '(' expr ')'				{ manage_ifexpr_IF_expr_parenthesis($3); };

ifsuffix: stmt ELSE stmt			{ manage_ifsuffix_stmt_ELSE_stmt(); }
		| stmt						{ manage_ifsuffix_stmt(); }
		;

whilestmt:	WHILE '(' expr ')' stmt	{ manage_whilestmt_WHILE_expr_parenthesis_stmt(); 	};

forstmt:	FOR '(' elist ';' expr ';' elist ')' stmt { manage_forstmt_FOR(); 			};

returnstmt:	RETURN expr ';'			{ manage_returnstmt_RETURN_expr_semicolon($2); 		}
		| RETURN ';'				{ manage_returnstmt_RETURN_semicolon(); 			}
		;


%%


int yyerror (const char* yaccProvidedMessage) {
	printf("%d: #ERROR: %s, before token: %s\n", yylineno, yaccProvidedMessage,  yytext);
}

int main ( argc, argv ) int argc; char **argv;{
	++argv, --argc;  /* skip over program name */

	/* Lexer can read form file if such argument is provided */
	if (argc > 0)	{ yyin = fopen(argv[0], "r"); }
	else 		{ yyin = stdin; }

	/* Initialize */
	initManager();
	initSymbolTable();

	/* Compute */
	yyparse();

	/* Finalize */
	printSymbolTable();
	printQuads();

	return 0;
}
