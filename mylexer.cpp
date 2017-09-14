/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 6 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 06/07/15
* Time: 01:28:29
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

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

#line 57 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

#line 25 ".\\mylexer.l"
	
#line 73 "mylexer.cpp"
/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 31 ".\\mylexer.l"
	
#line 33 ".\\mylexer.l"

	// place any extra initialisation code here

#line 86 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 38 ".\\mylexer.l"

	// place any extra cleanup code here

#line 98 "mylexer.cpp"
}

#line 51 ".\\mylexer.l"
	
#line 103 "mylexer.cpp"
#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 57 ".\\mylexer.l"

	// extract yylval.value for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 172 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 63 ".\\mylexer.l"
//cout<<"begin"<<endl;			
											return (BEGIN);
										
#line 181 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 66 ".\\mylexer.l"
//cout<<"program"<<endl;
											return (PROGRAM);
										
#line 190 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 69 ".\\mylexer.l"
//cout<<"var"<<endl;
											return (VAR);
										
#line 199 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 72 ".\\mylexer.l"
//cout<<"array"<<endl;
											return (ARRAY);
										
#line 208 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 75 ".\\mylexer.l"
//cout<<"record"<<endl;
											return (RECORD);
										
#line 217 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 78 ".\\mylexer.l"
//cout<<"end"<<endl;
											return (END);
										
#line 226 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 81 ".\\mylexer.l"
//cout<<"of"<<endl;
											return (OF);
										
#line 235 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 84 ".\\mylexer.l"
//cout<<"integer"<<endl;
											return (INTEGER);
										
#line 244 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 87 ".\\mylexer.l"
//cout<<"real"<<endl;
											return (REAL);
										
#line 253 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 90 ".\\mylexer.l"
//cout<<"boolean"<<endl;
											return (BOOLEAN);
										
#line 262 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 93 ".\\mylexer.l"
//cout<<"function"<<endl;
											return (FUNCTION);
										
#line 271 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 96 ".\\mylexer.l"
//cout<<"procedure"<<endl;
											return (PROCEDURE);
										
#line 280 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 99 ".\\mylexer.l"
//cout<<"if"<<endl;
											return (IF);
										
#line 289 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 102 ".\\mylexer.l"
//cout<<"then"<<endl;
											return (THEN);
										
#line 298 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 105 ".\\mylexer.l"
//cout<<"else"<<endl;
											return (ELSE);
										
#line 307 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 108 ".\\mylexer.l"
//cout<<"while"<<endl;
											return (WHILE);
										
#line 316 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 111 ".\\mylexer.l"
//cout<<"do"<<endl;
											return (DO);
										
#line 325 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 114 ".\\mylexer.l"
//cout<<"read"<<endl;
											return (READ);
#line 333 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 116 ".\\mylexer.l"
//cout<<"write"<<endl;
											return (WRITE);
										
#line 342 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 119 ".\\mylexer.l"
//cout<<"not"<<endl;
											return (NOT);
										
#line 351 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 122 ".\\mylexer.l"
//cout<<"true"<<endl;
											return (TRUE);
										
#line 360 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 125 ".\\mylexer.l"
//cout<<"false"<<endl;
											return (FALSE);
										
#line 369 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 128 ".\\mylexer.l"
//cout<<"for"<<endl;
											return(FOR);
										
#line 378 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 131 ".\\mylexer.l"
//cout<<"to"<<endl;
											return(TO);
										
#line 387 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 134 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 394 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 135 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 401 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 136 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 408 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 137 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 415 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 138 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 422 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 139 ".\\mylexer.l"
yylval.value = yytext;return (RELOP);
#line 429 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 140 ".\\mylexer.l"
yylval.value = yytext;return (ADDOP);
#line 436 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 141 ".\\mylexer.l"
yylval.value = yytext;return (ADDOP);
#line 443 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 142 ".\\mylexer.l"
yylval.value = yytext;return (ADDOP);
#line 450 "mylexer.cpp"
		}
		break;
	case 34:
		{
#line 143 ".\\mylexer.l"
yylval.value = yytext;return (MULOP);
#line 457 "mylexer.cpp"
		}
		break;
	case 35:
		{
#line 144 ".\\mylexer.l"
yylval.value = yytext;return (MULOP);
#line 464 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 145 ".\\mylexer.l"
yylval.value = yytext;return (MULOP);
#line 471 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 146 ".\\mylexer.l"
yylval.value = yytext;return (MULOP);
#line 478 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 147 ".\\mylexer.l"
return (ASSIGNOP);
#line 485 "mylexer.cpp"
		}
		break;
	case 39:
		{
#line 148 ".\\mylexer.l"
return (COMMA);
#line 492 "mylexer.cpp"
		}
		break;
	case 40:
		{
#line 149 ".\\mylexer.l"
return (SEMICOLON);
#line 499 "mylexer.cpp"
		}
		break;
	case 41:
		{
#line 150 ".\\mylexer.l"
return (DEFINE);
#line 506 "mylexer.cpp"
		}
		break;
	case 42:
		{
#line 151 ".\\mylexer.l"
return (LEFTCUBE);
#line 513 "mylexer.cpp"
		}
		break;
	case 43:
		{
#line 152 ".\\mylexer.l"
return (RIGHTCUBE);
#line 520 "mylexer.cpp"
		}
		break;
	case 44:
		{
#line 153 ".\\mylexer.l"
return (LEFTCIRCLE);
#line 527 "mylexer.cpp"
		}
		break;
	case 45:
		{
#line 154 ".\\mylexer.l"
return (RIGHTCIRCLE);
#line 534 "mylexer.cpp"
		}
		break;
	case 46:
		{
#line 155 ".\\mylexer.l"
return (PROGRAMEND);
#line 541 "mylexer.cpp"
		}
		break;
	case 47:
		{
#line 157 ".\\mylexer.l"
addref(yylineno,yytext);yylval.value = yytext;return ID;
#line 548 "mylexer.cpp"
		}
		break;
	case 48:
		{
#line 158 ".\\mylexer.l"
yylval.value = yytext;return DIGITS;
#line 555 "mylexer.cpp"
		}
		break;
	case 49:
		{
#line 159 ".\\mylexer.l"
yylval.value = yytext;return NUM;
#line 562 "mylexer.cpp"
		}
		break;
	case 50:
		{
#line 160 ".\\mylexer.l"

#line 569 "mylexer.cpp"
		}
		break;
	case 51:
		{
#line 161 ".\\mylexer.l"
lineno++;
#line 576 "mylexer.cpp"
		}
		break;
	case 52:
		{
#line 162 ".\\mylexer.l"

				char c;
				c = input();
				while(c != '}')
				{
					if(c == '\n') lineno++;
					c = input();
				}
			
#line 591 "mylexer.cpp"
		}
		break;
	case 53:
		{
#line 171 ".\\mylexer.l"

				char c;
				c = input();
				while(c != '\n')
				{
					c = input();
				}
				lineno++;
			
#line 606 "mylexer.cpp"
		}
		break;
	case 54:
		{
#line 180 ".\\mylexer.l"

#line 613 "mylexer.cpp"
		}
		break;
	case 55:
		{
#line 181 ".\\mylexer.l"

#line 620 "mylexer.cpp"
		}
		break;
	case 56:
		{
#line 182 ".\\mylexer.l"

				cout<<"Lexical Error!"<< lineno + 1 << endl;
				hasError = true;
			
#line 630 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 370;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 5, 1 },
		{ 46, 19 },
		{ 47, 19 },
		{ 6, 1 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 73, 73 },
		{ 74, 44 },
		{ 24, 30 },
		{ 74, 44 },
		{ 71, 39 },
		{ 45, 17 },
		{ 0, 43 },
		{ 42, 15 },
		{ 62, 31 },
		{ 7, 1 },
		{ 48, 21 },
		{ 94, 70 },
		{ 44, 73 },
		{ 95, 71 },
		{ 24, 22 },
		{ 4, 4 },
		{ 0, 0 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 62, 31 },
		{ 49, 38 },
		{ 22, 1 },
		{ 23, 1 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 28, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 29, 1 },
		{ 30, 1 },
		{ 31, 1 },
		{ 24, 1 },
		{ 32, 1 },
		{ 24, 1 },
		{ 33, 1 },
		{ 24, 1 },
		{ 34, 1 },
		{ 35, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 36, 1 },
		{ 70, 38 },
		{ 37, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 49, 38 },
		{ 38, 1 },
		{ 23, 1 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 28, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 39, 1 },
		{ 29, 1 },
		{ 40, 1 },
		{ 31, 1 },
		{ 24, 1 },
		{ 32, 1 },
		{ 24, 1 },
		{ 33, 1 },
		{ 24, 1 },
		{ 34, 1 },
		{ 35, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 24, 1 },
		{ 41, 1 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 0, 0 },
		{ 103, 86 },
		{ 0, 0 },
		{ 76, 49 },
		{ 87, 63 },
		{ 104, 86 },
		{ 88, 63 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 103, 86 },
		{ 61, 40 },
		{ 76, 49 },
		{ 87, 63 },
		{ 104, 86 },
		{ 88, 63 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 24, 136 },
		{ 55, 27 },
		{ 61, 40 },
		{ 68, 35 },
		{ 105, 87 },
		{ 53, 26 },
		{ 50, 23 },
		{ 54, 26 },
		{ 77, 50 },
		{ 78, 51 },
		{ 64, 33 },
		{ 58, 28 },
		{ 106, 87 },
		{ 69, 35 },
		{ 72, 40 },
		{ 56, 27 },
		{ 51, 23 },
		{ 65, 33 },
		{ 79, 53 },
		{ 59, 28 },
		{ 66, 33 },
		{ 57, 27 },
		{ 80, 54 },
		{ 81, 55 },
		{ 82, 56 },
		{ 83, 57 },
		{ 84, 59 },
		{ 85, 60 },
		{ 86, 62 },
		{ 63, 32 },
		{ 89, 64 },
		{ 90, 66 },
		{ 91, 67 },
		{ 55, 27 },
		{ 92, 68 },
		{ 68, 35 },
		{ 105, 87 },
		{ 53, 26 },
		{ 50, 23 },
		{ 54, 26 },
		{ 77, 50 },
		{ 78, 51 },
		{ 64, 33 },
		{ 58, 28 },
		{ 106, 87 },
		{ 69, 35 },
		{ 93, 69 },
		{ 56, 27 },
		{ 51, 23 },
		{ 65, 33 },
		{ 79, 53 },
		{ 59, 28 },
		{ 66, 33 },
		{ 57, 27 },
		{ 80, 54 },
		{ 81, 55 },
		{ 82, 56 },
		{ 83, 57 },
		{ 84, 59 },
		{ 85, 60 },
		{ 86, 62 },
		{ 63, 32 },
		{ 89, 64 },
		{ 90, 66 },
		{ 91, 67 },
		{ 96, 76 },
		{ 92, 68 },
		{ 97, 77 },
		{ 98, 78 },
		{ 99, 79 },
		{ 100, 81 },
		{ 101, 83 },
		{ 102, 84 },
		{ 52, 25 },
		{ 67, 34 },
		{ 107, 88 },
		{ 108, 89 },
		{ 109, 90 },
		{ 93, 69 },
		{ 110, 92 },
		{ 111, 93 },
		{ 112, 96 },
		{ 113, 97 },
		{ 114, 98 },
		{ 115, 100 },
		{ 116, 101 },
		{ 117, 102 },
		{ 118, 103 },
		{ 119, 104 },
		{ 120, 107 },
		{ 121, 110 },
		{ 122, 111 },
		{ 123, 114 },
		{ 124, 116 },
		{ 125, 117 },
		{ 126, 118 },
		{ 127, 119 },
		{ 96, 76 },
		{ 128, 120 },
		{ 97, 77 },
		{ 98, 78 },
		{ 99, 79 },
		{ 100, 81 },
		{ 101, 83 },
		{ 102, 84 },
		{ 52, 25 },
		{ 67, 34 },
		{ 107, 88 },
		{ 108, 89 },
		{ 109, 90 },
		{ 129, 123 },
		{ 110, 92 },
		{ 111, 93 },
		{ 112, 96 },
		{ 113, 97 },
		{ 114, 98 },
		{ 115, 100 },
		{ 116, 101 },
		{ 117, 102 },
		{ 118, 103 },
		{ 119, 104 },
		{ 120, 107 },
		{ 121, 110 },
		{ 122, 111 },
		{ 123, 114 },
		{ 124, 116 },
		{ 125, 117 },
		{ 126, 118 },
		{ 127, 119 },
		{ 130, 124 },
		{ 128, 120 },
		{ 131, 125 },
		{ 132, 126 },
		{ 133, 127 },
		{ 134, 130 },
		{ 135, 132 },
		{ 136, 135 },
		{ 60, 29 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 43, 16 },
		{ 129, 123 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 130, 124 },
		{ 0, 0 },
		{ 131, 125 },
		{ 132, 126 },
		{ 133, 127 },
		{ 134, 130 },
		{ 135, 132 },
		{ 136, 135 },
		{ 60, 29 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 },
		{ 75, 75 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 56 },
		{ 0, 21, 50 },
		{ 0, 0, 51 },
		{ 0, 0, 55 },
		{ 0, 0, 54 },
		{ 0, 0, 44 },
		{ 0, 0, 45 },
		{ 0, 0, 34 },
		{ 0, 0, 31 },
		{ 0, 0, 39 },
		{ 0, 0, 32 },
		{ 0, 0, 46 },
		{ 0, -25, 35 },
		{ 73, 285, 48 },
		{ 0, -41, 41 },
		{ 0, 0, 40 },
		{ 0, -58, 27 },
		{ 0, 0, 25 },
		{ 0, -36, 28 },
		{ 38, -81, 47 },
		{ 136, 127, 47 },
		{ 136, 0, 47 },
		{ 136, 184, 47 },
		{ 136, 119, 47 },
		{ 136, 126, 47 },
		{ 136, 131, 47 },
		{ 136, 248, 47 },
		{ 40, -97, 47 },
		{ 136, -59, 47 },
		{ 136, 150, 47 },
		{ 136, 128, 47 },
		{ 136, 199, 47 },
		{ 136, 121, 47 },
		{ 0, 0, 42 },
		{ 0, 0, 43 },
		{ 136, -26, 47 },
		{ 136, -92, 47 },
		{ 136, 90, 47 },
		{ 0, 0, 52 },
		{ 0, 0, 53 },
		{ 73, -48, 0 },
		{ 75, -27, 0 },
		{ 0, 0, 38 },
		{ 0, 0, 29 },
		{ 0, 0, 26 },
		{ 0, 0, 30 },
		{ 136, 47, 47 },
		{ 136, 127, 47 },
		{ 136, 120, 47 },
		{ 136, 0, 17 },
		{ 136, 125, 47 },
		{ 136, 144, 47 },
		{ 136, 137, 47 },
		{ 136, 132, 47 },
		{ 136, 137, 47 },
		{ 136, 0, 13 },
		{ 136, 132, 47 },
		{ 136, 133, 47 },
		{ 136, 0, 7 },
		{ 136, 139, 47 },
		{ 136, 65, 47 },
		{ 136, 151, 47 },
		{ 136, 0, 24 },
		{ 136, 136, 47 },
		{ 136, 140, 47 },
		{ 136, 151, 47 },
		{ 136, 163, 47 },
		{ 136, -74, 47 },
		{ 136, -72, 47 },
		{ 136, 0, 33 },
		{ 0, -42, 49 },
		{ 75, 0, 0 },
		{ 0, 312, 49 },
		{ 136, 190, 47 },
		{ 136, 184, 47 },
		{ 136, 182, 47 },
		{ 136, 190, 47 },
		{ 136, 0, 6 },
		{ 136, 177, 47 },
		{ 136, 0, 23 },
		{ 136, 194, 47 },
		{ 136, 193, 47 },
		{ 136, 0, 20 },
		{ 136, 60, 47 },
		{ 136, 126, 47 },
		{ 136, 186, 47 },
		{ 136, 188, 47 },
		{ 136, 198, 47 },
		{ 136, 0, 3 },
		{ 136, 193, 47 },
		{ 136, 186, 47 },
		{ 136, 0, 37 },
		{ 136, 0, 36 },
		{ 136, 182, 47 },
		{ 136, 194, 47 },
		{ 136, 204, 47 },
		{ 136, 0, 15 },
		{ 136, 205, 47 },
		{ 136, 191, 47 },
		{ 136, 205, 47 },
		{ 136, 208, 47 },
		{ 136, 196, 47 },
		{ 136, 0, 18 },
		{ 136, 0, 9 },
		{ 136, 197, 47 },
		{ 136, 0, 14 },
		{ 136, 0, 21 },
		{ 136, 211, 47 },
		{ 136, 212, 47 },
		{ 136, 0, 4 },
		{ 136, 0, 1 },
		{ 136, 217, 47 },
		{ 136, 0, 22 },
		{ 136, 210, 47 },
		{ 136, 215, 47 },
		{ 136, 217, 47 },
		{ 136, 221, 47 },
		{ 136, 220, 47 },
		{ 136, 0, 16 },
		{ 136, 0, 19 },
		{ 136, 222, 47 },
		{ 136, 240, 47 },
		{ 136, 239, 47 },
		{ 136, 237, 47 },
		{ 136, 246, 47 },
		{ 136, 0, 5 },
		{ 136, 0, 10 },
		{ 136, 246, 47 },
		{ 136, 0, 8 },
		{ 136, 243, 47 },
		{ 136, 0, 2 },
		{ 136, 0, 11 },
		{ 136, 257, 47 },
		{ 0, 68, 12 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 186 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section
