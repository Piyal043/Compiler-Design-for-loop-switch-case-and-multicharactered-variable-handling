/* C Declarations */

%{
	#include<stdio.h>
	#include<string.h>
	int sym[26],store[26];
	int forswitch,val,i;
	int stack[1000],check[1000];
	int l=0,vn=0,nn;
	extern char *yytext,stt[1000];
	int yylex(void);
	struct vvr{
		int id;
		char name[1000];
		};
	struct vvr total[1000];
	
%}

/* BISON Declarations */
/*
%union {
	char *stringvalue;
	int value;
	}
%token < stringvalue> VAR
%token <value> num
%type <stringvalue> expression
%type <value> expression
%type <stringvalue> statement
*/
%token  If Else Main Int COLON Double String lfb rfb lsb rsb comma fs Add Sub Mul Div as bt st ploop nloop Switch Case Default str put num VAR

%nonassoc IfX
%nonassoc Else
%nonassoc ploop
%nonassoc nloop
%left st bt
%left Add Sub
%left Mul Div	

/* Simple grammar rules */

%%

program: Main lfb rfb lsb cstatement rsb { printf("\nsuccessful compilation\n"); }
	 ;

cstatement: /* empty */

	| cstatement statement
	
	| cstatement cdeclaration
	
	| cstatement structure
	
	;
	
cdeclaration:	TYPE ID1 	{ printf("\nvalid declaration\n"); }
			;
			
TYPE : Int

     | Double

     | String
     ;

ID1  : ID1 comma  dstatement 	{}

     | dstatement 	{}
     ;
dstatement: fs
	|		VAR { 
					int j=0,rs=11,ok=0;
					for(j=0;j<l;j++)
					{
						rs=strcmp(stt,total[j].name);
						if(rs==0)
						{
							printf("The variable %s has already been declared.\n",stt);
							ok=1;
							break;
						}
					}
					if(ok==0)
					{
						strcpy(total[l].name,stt);
						printf("Variable %s has been declared successfully\n",total[l].name);
						l++;
					}	 
				}
	| VAR as expression {
							
							int j=0,rs=11,ok=0;
							for(j=0;j<l;j++)
							{
								rs=strcmp(stt,total[j].name);
								if(rs==0)
								{
									printf("The variable %s has already been declared.\n",stt);
									ok=1;
									break;
								}
							}
							if(ok==0)
							{
								strcpy(total[l].name,stt);
								printf("Variable %s has been declared successfully\n",total[l].name);
								l++;
							}	 
						}

statement:   fs

	| expression  { printf("\nvalue of expression: %d\n", $1); }

        | VAR as expression  { 
								//sym[$1] = $3; 
								int j=0,rs=11,ok=0;
								for(j=0;j<l;j++)
								{
									rs=strcmp(stt,total[j].name);
									if(rs==0)
									{
										//printf("The variabledsfsdfad %d has already been declared.\n",$3);
										total[j].id=$3;
										ok=1;
										break;
									}
								}
								if(ok==0)
								{
									printf("Variable %s has not  declared yet.\n",stt);
								}
									
						     }

	;

expression: num				{ $$ = $1; 	}

	| VAR				{ 
							int j=0,rs=11,ok=0;
								for(j=0;j<l;j++)
								{
									rs=strcmp(stt,total[j].name);
									if(rs==0)
									{
										//printf("The variable %s has already been declared.\n",stt);
										$$=total[j].id;
										ok=1;
										break;
									}
								}
								if(ok==0)
								{
									printf("Variable %s has not  declared yet.\n",stt);
								}
						}

	| expression Add expression	{ $$ = $1 + $3; }

	| expression Sub expression	{ $$ = $1 - $3; }

	| expression Mul expression	{ $$ = $1 * $3; }

	| expression Div expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}

	| expression st expression	{ $$ = $1 < $3; }

	| expression bt expression	{ $$ = $1 > $3; }

	| lfb expression rfb		{ $$ = $2;	}
	
	| ploop lfb VAR as expression comma statement rfb lsb expression rsb {
																			printf("Variable in loop %s\n",stt);
																			//printf("%d %d %d\n",$3,sym[$3],$10);
																			int j=0,rs=11,ok=0;
																			for(j=0;j<l;j++)
																			{
																				rs=strcmp(stt,total[j].name);
																				if(rs==0)
																				{
																					//printf("The variable %s has already been declared.\n",stt);
																					total[j].id=$5;
																					ok=1;
																					break;
																				}
																			}
																			if(ok==0)
																			{
																				printf("Variable %s has not  declared yet.\n",stt);
																			}									
																																
																			for(total[j].id=$5;total[j].id<=$7;total[j].id+=1)
																			{
																				printf("expression in loop: %d\n",total[j].id);
																			}
																		}
	| put lfb expression rfb { printf("here is %d\n",$3);}
		
	;
	
structure :  Switch lfb expression rfb lsb ccase rsb {
														printf("Switch statement.\n");
														forswitch = $3;
														printf("Inside switch %d\n",$3);
														int m=0,no=0;
														for(m=0;m<nn;m++){
														if(check[m]==forswitch)
															printf("%d\n",stack[forswitch]);
														else
															no=1;
															}
														if(no==1){printf(" %d \n",val);}
														nn=0;
													}
		;
ccase: caselist| caselist defaultstm	;

caselist: casestm | casestm caselist ;

casestm: Case expression COLON expression 	{ 
												//printf("Now in Case: %d\n",$4);
												stack[$2]=$4;
												check[l]=$2;
												nn++;
											}
		| Case expression COLON put VAR { printf(" In switch statement: %s\n",yytext);}
		;

defaultstm: Default COLON expression 		{ 			
												//printf("Now in Case: %d\n",$3);
												val=$3;
											}
	;
	
%%

int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}

