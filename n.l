/* C Declarations */

%{
	#include<stdio.h>
	#include "n.tab.h"
	#include<stdlib.h>
	#include<string.h>
	//extern int yylval;
	char stt[1000];
%}

/*RE and Action*/

%%

"v_int"	{ return Int; }
"v_double"	{ return Double; }
"v_string"	{ return String; }

[0-9]+	{ 
		yylval = atoi(yytext);
		return num;
	}
	
"lfb"	{ return lfb; }
"rfb"	{ return rfb; }
"lsb"	{ return lsb; }
"rsb"	{ return rsb; }
"comma"	{ return comma; }
"fs"	{ return fs; }
"add"	{ return Add; }
"sub"	{ return Sub; }
"::" 	{ return COLON; }
"mul"	{ return Mul; }
"div"	{ return Div; }
"as"	{ return as;  }
"bt"	{ return bt; }
"st"	{ return st; }
"eq"     { return eq; }
"neq"     { return neq; }
"beq"     { return beq; }
"seq"     { return seq; }
"ploop"  {return ploop;}
"switch" {return Switch;}
"case" {return Case;}
"put" {return put;}
"puts" { return prints;}
"hoi"		{ return hoi;		}
"othoba"		{ return othoba;}
"nahoi"				{ return nahoi; }
[a-z|_]+	{
		//yylval = *yytext - 'a';
		//yylval->stringvalue=strdup(yytext);
		//strcpy(yylval.stringvalue,yytext);
		strcpy(stt,yytext);
		//printf("%s ins",stt);
		return	VAR;
	}

"v_int main :"	{ return Main; }
"func:" {return fun;}

[ \t\n]*	;

.	{
		yyerror("Unknown Character.\n");
	}
%%

/* user subroutines */

int main()
{
	yyin = freopen("a.txt","r",stdin);
	//yyout = freopen("out.txt","w",stdout);
	
	yyparse();

}

