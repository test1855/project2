%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2015Äê5ÔÂ30ÈÕ
****************************************************************************/

#include "myparser.h"
#include "variable.h"
#include <string>
#include <iostream>
using namespace std;
tablePtr symtab;
char *curfilename;
int lineno = 0;
bool hasError = false;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer
	
// class definition
{
	// place any extra class members here

}
	
// constructor
{
	// place any extra initialisation code here
} 	

// destructor
{
	// place any extra cleanup code here
}

// place any declarations here 
delim	[\t]
ws		{delim}+
letter	[A-Za-z]
digit	[0-9]
digits	{digit}+
id		{letter}({letter}|{digit})*
num		{digits}(\.{digits})?(E[+\-]?{digits})?
newline	[\n]
	
%%

/////////////////////////////////////////////////////////////////////////////
// rules section

%{
	// extract yylval.value for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}

// place your Lex rules here
[bB][eE][gG][iI][nN]					{//cout<<"begin"<<endl;			
											return (BEGIN);
										}
[pP][rR][oO][gG][rR][aA][mM]			{//cout<<"program"<<endl;
											return (PROGRAM);
										}
[vV][aA][rR]							{//cout<<"var"<<endl;
											return (VAR);
										}
[aA][rR][rR][aA][yY]					{//cout<<"array"<<endl;
											return (ARRAY);
										}
[rR][eE][cC][oO][rR][dD]				{//cout<<"record"<<endl;
											return (RECORD);
										}
[eE][nN][dD]							{//cout<<"end"<<endl;
											return (END);
										}
[oO][fF]								{//cout<<"of"<<endl;
											return (OF);
										}
[iI][nN][tT][eE][gG][eE][rR]			{//cout<<"integer"<<endl;
											return (INTEGER);
										}
[rR][eE][aA][lL]						{//cout<<"real"<<endl;
											return (REAL);
										}
[bB][oO][oO][lL][eE][aA][nN]			{//cout<<"boolean"<<endl;
											return (BOOLEAN);
										}
[fF][uU][nN][cC][tT][iI][oO][nN]		{//cout<<"function"<<endl;
											return (FUNCTION);
										}
[pP][rR][oO][cC][eE][dD][uU][rR][eE]	{//cout<<"procedure"<<endl;
											return (PROCEDURE);
										}
[iI][fF]								{//cout<<"if"<<endl;
											return (IF);
										}  
[tT][hH][eE][nN]						{//cout<<"then"<<endl;
											return (THEN);
										}
[eE][lL][sS][eE]						{//cout<<"else"<<endl;
											return (ELSE);
										}
[wW][hH][iI][lL][eE]					{//cout<<"while"<<endl;
											return (WHILE);
										}
[dD][oO]								{//cout<<"do"<<endl;
											return (DO);
										}
[rR][eE][aA][dD]						{//cout<<"read"<<endl;
											return (READ);}
[wW][rR][iI][tT][eE]					{//cout<<"write"<<endl;
											return (WRITE);
										}
[nN][oO][tT]							{//cout<<"not"<<endl;
											return (NOT);
										}
[tT][rR][uU][eE]						{//cout<<"true"<<endl;
											return (TRUE);
										}
[fF][aA][lL][sS][eE]					{//cout<<"false"<<endl;
											return (FALSE);
										}
[fF][oO][rR]							{//cout<<"for"<<endl;
											return(FOR);
										}
[tT][oO]								{//cout<<"to"<<endl;
											return(TO);
										}
"="			{yylval.value = yytext;return (RELOP);}
"<>"		{yylval.value = yytext;return (RELOP);}
"<"			{yylval.value = yytext;return (RELOP);}
">"			{yylval.value = yytext;return (RELOP);}
"<="		{yylval.value = yytext;return (RELOP);}
">="		{yylval.value = yytext;return (RELOP);}
"+"			{yylval.value = yytext;return (ADDOP);}
"-"			{yylval.value = yytext;return (ADDOP);}
or			{yylval.value = yytext;return (ADDOP);}
"*"			{yylval.value = yytext;return (MULOP);}
"/"			{yylval.value = yytext;return (MULOP);}
mod			{yylval.value = yytext;return (MULOP);}
and			{yylval.value = yytext;return (MULOP);}
":="		{return (ASSIGNOP);}
","			{return (COMMA);}
";"			{return (SEMICOLON);}
":"			{return (DEFINE);}
"["			{return (LEFTCUBE);}
"]"			{return (RIGHTCUBE);}
"("			{return (LEFTCIRCLE);}
")"			{return (RIGHTCIRCLE);}
"."			{return (PROGRAMEND);}

{id}		{addref(yylineno,yytext);yylval.value = yytext;return ID;}
{digits}	{yylval.value = yytext;return DIGITS;}
{num}		{yylval.value = yytext;return NUM;}
{ws}		{}
{newline}	{lineno++;}
"{"			{
				char c;
				c = input();
				while(c != '}')
				{
					if(c == '\n') lineno++;
					c = input();
				}
			}
"//"		{
				char c;
				c = input();
				while(c != '\n')
				{
					c = input();
				}
				lineno++;
			}
" "			{}
"\r"		{}
.			{
				cout<<"Lexical Error!"<< lineno + 1 << endl;
				hasError = true;
			}
%%

/////////////////////////////////////////////////////////////////////////////
// programs section