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
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 06/07/15
* Time: 01:28:29
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2015年6月7日
****************************************************************************/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "variable.h"
#include "myparser.h"
using namespace std;

extern int lineno;
extern bool hasError;
Func functable;
extern ofstream outfile;
tablenode tablestack[100];
int top = 0;
int indextop = 0;
int indexstack[100];
string arrayType = "";


#line 65 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 50 ".\\myparser.y"

	// place any extra initialisation code here

#line 89 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 55 ".\\myparser.y"

	// place any extra cleanup code here

#line 103 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 138 ".\\myparser.y"

								if(!hasError)
								{
									cout << "Compile Succeed!" << endl;
									cout << yyattribute(2 - 3).value << endl;
									outfile << yyattribute(2 - 3).value << endl;
									outfile.close();
								}
								else
								{
									cout << "Error Detected!" << endl;
								}
							
#line 225 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 154 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "program " + yyattribute(2 - 6).value +"(" + yyattribute(4 - 6).value + ");";
							
#line 240 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 158 ".\\myparser.y"
 
								yyerrok(); 
								hasError = true;
							
#line 256 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 165 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + ", " + yyattribute(3 - 3).value;
							
#line 271 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 169 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
#line 286 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 175 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "#include<stdio.h>\n" + yyattribute(1 - 3).value + "\n" + yyattribute(2 - 3).value + "\n" + "int main()\n{\n" + yyattribute(3 - 3).value + "return 0;\n}\n";
							
#line 301 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 181 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(2 - 3).value + ";";
							
#line 316 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#line 185 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
							
#line 326 "myparser.cpp"
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 191 ".\\myparser.y"
	
								(*(YYSTYPE YYFAR*)yyvalptr).value = otherDefineTransform(yyattribute(1 - 5).value, yyattribute(3 - 5).value, yyattribute(5 - 5).value);
							
#line 340 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 195 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 356 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 200 ".\\myparser.y"
								
								(*(YYSTYPE YYFAR*)yyvalptr).value = defineTransform(yyattribute(1 - 3).value, yyattribute(3 - 3).value);
							
#line 371 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 206 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value; //Pascal和C语言之间的类型对应:integer(int) real(float) boolean(int:0/1)
							
#line 386 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 210 ".\\myparser.y"

								int lower, upper;
								string len;
								stringstream ss,ss2,ss3;
								ss << yyattribute(3 - 9).value;
								ss >> lower;
								ss2 << yyattribute(6 - 9).value;
								ss2 >> upper;	
								ss3 << upper - lower + 1;
								ss3 >> len;
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(9 - 9).value + "[" + len + "]" + yyattribute(3 - 9).value + "|" + yyattribute(6 - 9).value + "\n"; //生成式左侧的语法属性将带有数组类型,长度,上下界,便于下一步规约做符号表的插入(int[5]0|4)
							
#line 410 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 223 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "struct{\n" + yyattribute(2 - 3).value + ";\n}\n";
							
#line 425 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 229 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "int";
							
#line 440 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 233 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "float";
							
#line 455 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 237 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "boolint"; //1 = TRUE, 0 = FALSE
							
#line 470 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 243 ".\\myparser.y"

								yyerrok(); 
								hasError = true; 
							
#line 486 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 248 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + yyattribute(2 - 3).value;
							
#line 501 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#line 252 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
							
#line 511 "myparser.cpp"
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 258 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + "\n{\n" + yyattribute(2 - 3).value + "\n" + yyattribute(3 - 3).value + "}\n";
								top=indexstack[indextop-1];
                                indextop--;
							
#line 527 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 264 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 543 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 269 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 559 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 275 ".\\myparser.y"

								tablestack[top].value=yyattribute(2 - 2).value;
								indexstack[indextop]=top;
								top++;
								indextop++;
							
#line 577 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 282 ".\\myparser.y"

								addFname(yyattribute(2 - 7).value,yyattribute(6 - 7).value);
								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(6 - 7).value + " " + yyattribute(2 - 7).value + "(" + yyattribute(4 - 7).value + ")";
							
#line 593 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 287 ".\\myparser.y"

								tablestack[top].value=yyattribute(2 - 2).value;
								indexstack[indextop]=top;
								top++;
								indextop++;
							
#line 611 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 294 ".\\myparser.y"

								if(yyattribute(4 - 5).value=="")
									addFunction("","");
								addFname(yyattribute(2 - 5).value,"");
								(*(YYSTYPE YYFAR*)yyvalptr).value = "void " + yyattribute(2 - 5).value + "(" + yyattribute(4 - 5).value + ")";
							
#line 629 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 303 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(2 - 3).value;
							
#line 644 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#line 307 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
							
#line 654 "myparser.cpp"
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 313 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + ", " + yyattribute(3 - 3).value;
							
#line 668 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 317 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
#line 683 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 321 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 699 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 328 ".\\myparser.y"
	
								(*(YYSTYPE YYFAR*)yyvalptr).value = parameterTransform(yyattribute(2 - 4).value, yyattribute(4 - 4).value);
							
#line 714 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 332 ".\\myparser.y"
	
								(*(YYSTYPE YYFAR*)yyvalptr).value = otherParameterTransform(yyattribute(1 - 3).value, yyattribute(3 - 3).value);										
							
#line 729 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 338 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(2 - 3).value;
							
#line 744 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 342 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 760 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 349 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
#line 775 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#line 353 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "";
							
#line 785 "myparser.cpp"
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 359 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + yyattribute(3 - 3).value;
							
#line 799 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 363 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
#line 814 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 369 ".\\myparser.y"

								yyerrok();
								yyclearin(); 
								hasError = true;
							
#line 831 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 375 ".\\myparser.y"

								yyerrok();
								yyclearin(); 
								hasError = true;
							
#line 848 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 381 ".\\myparser.y"

								yyerrok();
								hasError = true;
							
#line 864 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 386 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 880 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 391 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 896 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 396 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 912 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 401 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 928 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 406 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 944 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 411 ".\\myparser.y"

								yyerrok(); 
								hasError = true;
							
#line 960 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 417 ".\\myparser.y"

								if(checkFunction(yyattribute(1 - 3).value, "") == "false")
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " = " + yyattribute(3 - 3).value + ";\n";
								else if(CheckFunction(yyattribute(1 - 3).value) != "false")
									(*(YYSTYPE YYFAR*)yyvalptr).value = "return " + yyattribute(3 - 3).value + ";\n";
							    if(yyattribute(1 - 3).type!=yyattribute(3 - 3).type&&checkFunction(yyattribute(1 - 3).value, "") == "false")
								{
								   //cout<<$1.type<<" "<<$3.type<<"!!!"<<endl;
								   cout<<lineno+1<<":";
								   yyerror("type error in ASSIGNOP statement");
								   hasError = true;
								}
								
							
#line 986 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 432 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value + ";\n";
							
#line 1001 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 436 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
#line 1016 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 440 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "if(" + yyattribute(2 - 4).value + ")\n{\n" + yyattribute(4 - 4).value + "}\n";
								if(yyattribute(2 - 4).type!="bool")
								{
									cout<<lineno-1<<":";
									yyerror("error in if expression type");
									hasError = true;
								}
							
#line 1037 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 450 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "if(" + yyattribute(2 - 6).value + ")\n{\n" + yyattribute(4 - 6).value + "}\nelse\n{\n" + yyattribute(6 - 6).value + "}\n";
								if(yyattribute(2 - 6).type!="bool")
								{
									cout<<lineno-1<<":";
									yyerror("error in if expression type");
									hasError = true;
								}
							
#line 1058 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 460 ".\\myparser.y"

								if(yyattribute(2 - 2).type!="bool")
								{
									cout<<lineno+1<<":";
									yyerror("error in while expression type");
									hasError = true;
								}
							
#line 1078 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 469 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "while(" + yyattribute(2 - 5).value + ")\n{\n" + yyattribute(5 - 5).value + "}\n";
							
#line 1093 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 473 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(2 - 4).value + "\n{\n" + yyattribute(4 - 4).value + "}\n";
							
#line 1108 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 477 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = readTransform(yyattribute(3 - 4).value);					
							
#line 1123 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 481 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = writeTransform(yyattribute(3 - 4).value);	
							
#line 1138 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 487 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "for(" + yyattribute(1 - 5).value + " = " + yyattribute(3 - 5).value + "; " + yyattribute(1 - 5).value + " < " + yyattribute(5 - 5).value + "; " + yyattribute(1 - 5).value + "++)";
								if(yyattribute(1 - 5).type!="int")
								{
									cout<<lineno+1<<":";
									yyerror("range is wrong in for");
									hasError = true;
								}
								if(yyattribute(3 - 5).value>yyattribute(5 - 5).value)
								{
									cout<<lineno+1<<":";
									yyerror("range is illegal in for");
									hasError = true;
								}
                            
#line 1165 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 505 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
#line 1180 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 509 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
#line 1195 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 513 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 4).value + "(" + yyattribute(3 - 4).value + ")";
							
#line 1210 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 517 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = arrayCheck(yyattribute(1 - 4).value, yyattribute(3 - 4).value);
							
#line 1225 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 523 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								int i;
								string funcexist;
								funcexist=checkFunction(yyattribute(1 - 1).value,"");
								for(i=0;i<top;i++)
								{
									if(tablestack[i].value==yyattribute(1 - 1).value)
									{  
									   yyattribute(1 - 1).type=tablestack[i].type;
									   break;
									}
								}
								if(i==top&&funcexist == "false")
								{
									cout<<lineno+1<<":";
									cout<<yyattribute(1 - 1).value<<" ";
									yyerror("hasn't been declared");
									hasError = true;
								}
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 1).type;
								/*else if(i<top)
								{
								   $$.type=$1.type;
								}
								else
								{
								   funcexist=CheckFunction($1.value);
								   {
								    $$.type=funcexist;
								   }
								}*/
							
#line 1270 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 557 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = arrayCheck(yyattribute(1 - 4).value, yyattribute(3 - 4).value);
							
#line 1285 "myparser.cpp"
			}
		}
		break;
	case 66:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 563 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value + "()";
								string funcexist;
								funcexist=checkFunction(yyattribute(1 - 1).value,"");
								if(funcexist=="Typeerror"){
									cout<<lineno+1<<":";
									yyerror("procedure parameter error");
									hasError = true;
									}
							
#line 1307 "myparser.cpp"
			}
		}
		break;
	case 67:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 574 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 4).value + "(" + yyattribute(3 - 4).value + ")";
								string output = getTypeList(yyattribute(3 - 4).value);
								cout<<output<<endl;
								string funcexist;
								funcexist=checkFunction(yyattribute(1 - 4).value,output);
								if(funcexist=="Typeerror"){
									cout<<lineno+1<<":";
									yyerror("procedure parameter error");
									hasError = true;
									}
								//cout<<funcexist<<endl;
							
#line 1332 "myparser.cpp"
			}
		}
		break;
	case 68:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 590 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + "," + yyattribute(3 - 3).value;
							
#line 1347 "myparser.cpp"
			}
		}
		break;
	case 69:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 594 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
							
#line 1362 "myparser.cpp"
			}
		}
		break;
	case 70:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 600 ".\\myparser.y"
	
								if(yyattribute(2 - 3).value == "=")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " == " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == "<>")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " != " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == "<")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " < " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == "<=")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " <= " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == ">")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " > " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}
								else if (yyattribute(2 - 3).value == ">=")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " >= " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
								}	
								else
								{
								    cout<<lineno+1<<":";
									yyerror("Relop Error!");
									hasError = true;
								}
							
#line 1412 "myparser.cpp"
			}
		}
		break;
	case 71:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 639 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 1).type;
							
#line 1428 "myparser.cpp"
			}
		}
		break;
	case 72:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 646 ".\\myparser.y"
	
								if(yyattribute(2 - 3).value == "+")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " + " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="int"&&yyattribute(3 - 3).value=="int")
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
									else
										(*(YYSTYPE YYFAR*)yyvalptr).type="float";
								}
								else if (yyattribute(2 - 3).value == "-")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " - " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="int"&&yyattribute(3 - 3).value=="int")
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
									else
										(*(YYSTYPE YYFAR*)yyvalptr).type="float";
								}
								else if (yyattribute(2 - 3).value == "or")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " | " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="bool"&yyattribute(3 - 3).type=="bool")
										(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
									else
									{
										cout<<lineno+1<<":";
										yyerror("type error in or");
										(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
										hasError = true;
									}
								}
								else
								{
								    cout<<lineno+1<<":";
									yyerror("Addop Error!");
									hasError = true;
								}
							
#line 1477 "myparser.cpp"
			}
		}
		break;
	case 73:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 684 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 1).type;
							
#line 1492 "myparser.cpp"
			}
		}
		break;
	case 74:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 688 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 2).value + yyattribute(2 - 2).value;
								if(yyattribute(2 - 2).type=="bool")
								{
									cout<<lineno+1<<":";
									yyerror("sign cannot be used for bool type");
									(*(YYSTYPE YYFAR*)yyvalptr).value=yyattribute(2 - 2).value;
									hasError = true;
								}       
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(2 - 2).type;
							
#line 1515 "myparser.cpp"
			}
		}
		break;
	case 75:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 702 ".\\myparser.y"
							
								if(yyattribute(2 - 3).value == "*")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " * " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="int"&&yyattribute(3 - 3).value=="int")
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
									else
										(*(YYSTYPE YYFAR*)yyvalptr).type="float";
								}
								else if (yyattribute(2 - 3).value == "/")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = "(float) " + yyattribute(1 - 3).value + " / " + "(float) " + yyattribute(3 - 3).value;
									(*(YYSTYPE YYFAR*)yyvalptr).type="float";
								}
								else if (yyattribute(2 - 3).value == "div")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " / " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type!="int"||yyattribute(2 - 3).type!="int")
									{
										cout<<lineno+1<<":";
										yyerror("type error in div");
										hasError = true;
									}
									(*(YYSTYPE YYFAR*)yyvalptr).type="int";
								}
								else if (yyattribute(2 - 3).value == "mod")
								{	
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " % " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="int"&&yyattribute(3 - 3).type=="int")
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
									else
									{
										cout<<lineno+1<<":";
										yyerror("type error in mod");
										(*(YYSTYPE YYFAR*)yyvalptr).type="int";
										hasError = true;
									}
								}
								else if (yyattribute(2 - 3).value == "and")
								{
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 3).value + " & " + yyattribute(3 - 3).value;
									if(yyattribute(1 - 3).type=="bool"&&yyattribute(3 - 3).type=="bool")
										(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
									else
									{
										cout<<lineno+1<<":";
										yyerror("type error in and");
										hasError = true;
										(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
									}
										
									}
									else
									{
										cout<<lineno+1<<":";
										yyerror("Mulop Error!");
										hasError = true;
									}
							
#line 1586 "myparser.cpp"
			}
		}
		break;
	case 76:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 762 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(1 - 1).type;
							
#line 1601 "myparser.cpp"
			}
		}
		break;
	case 77:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 768 ".\\myparser.y"

								//cout << "factor->id : " << $1.value << endl;
								string funcexist;
								funcexist=checkFunction(yyattribute(1 - 1).value,"");
								if(funcexist == "false")
								{
								    //cout<<"notfunctip"<<endl;
									(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
									int i;
									for(i=0;i<top;i++)
									{
										if(tablestack[i].value==yyattribute(1 - 1).value)
											break;
									}
									if(i==top)
									{
										cout<<lineno+1<<":";
										cout<<yyattribute(1 - 1).value<<" ";
										yyerror("hasn't been declared");
										hasError = true;
									}
									else
									{
										(*(YYSTYPE YYFAR*)yyvalptr).type=tablestack[i].type;
									}
								}
								else
									(*(YYSTYPE YYFAR*)yyvalptr).value=yyattribute(1 - 1).value+"("+")";
							
#line 1642 "myparser.cpp"
			}
		}
		break;
	case 78:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 798 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 4).value + "(" + yyattribute(3 - 4).value + ")";
								string output = getTypeList(yyattribute(3 - 4).value);
								//cout<<output<<endl;
								string funcexist;
								funcexist=checkFunction(yyattribute(1 - 4).value,output);
								if(funcexist=="Typeerror")
								{
									cout<<lineno+1<<":";
									yyerror("procedure parameter error");
									hasError = true;
								}
								else if(funcexist == "false")
								{
									cout<<lineno+1<<":";
									cout<<yyattribute(1 - 4).value<<" ";
									yyerror("hasn't been declared");
									hasError = true;
								}
								string FuncExist;
								FuncExist=CheckFunction(yyattribute(1 - 4).value);
								{
								    (*(YYSTYPE YYFAR*)yyvalptr).type=FuncExist;
								}
							
#line 1679 "myparser.cpp"
			}
		}
		break;
	case 79:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 824 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = arrayCheck(yyattribute(1 - 4).value, yyattribute(3 - 4).value);
								(*(YYSTYPE YYFAR*)yyvalptr).type = arrayType;
							
#line 1695 "myparser.cpp"
			}
		}
		break;
	case 80:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 829 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								if(yyattribute(1 - 1).type.find(".",0)==-1)
									(*(YYSTYPE YYFAR*)yyvalptr).type="int";
								else
									(*(YYSTYPE YYFAR*)yyvalptr).type="float";
							
#line 1714 "myparser.cpp"
			}
		}
		break;
	case 81:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 837 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = yyattribute(1 - 1).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type="int";
							
#line 1730 "myparser.cpp"
			}
		}
		break;
	case 82:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 842 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "(" + yyattribute(2 - 3).value + ")";
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(2 - 3).type;
							
#line 1746 "myparser.cpp"
			}
		}
		break;
	case 83:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 847 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "!" + yyattribute(2 - 2).value;
								(*(YYSTYPE YYFAR*)yyvalptr).type=yyattribute(2 - 2).type;
							
#line 1762 "myparser.cpp"
			}
		}
		break;
	case 84:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 852 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "1";
								(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
							
#line 1778 "myparser.cpp"
			}
		}
		break;
	case 85:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 857 ".\\myparser.y"

								(*(YYSTYPE YYFAR*)yyvalptr).value = "0";
								(*(YYSTYPE YYFAR*)yyvalptr).type="bool";
							
#line 1794 "myparser.cpp"
			}
		}
		break;
	case 86:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 864 ".\\myparser.y"

								if (yyattribute(1 - 1).value == "+")
									(*(YYSTYPE YYFAR*)yyvalptr).value = "+";
								else if (yyattribute(1 - 1).value == "-")
									(*(YYSTYPE YYFAR*)yyvalptr).value = "-";
								else
								{
									yyerror("Sign Error!");
									hasError = true;
								}
							
#line 1817 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "PROGRAM", 1 },
		{ "FUNCTION", 2 },
		{ "PROCEDURE", 3 },
		{ "INTEGER", 4 },
		{ "REAL", 5 },
		{ "BOOLEAN", 6 },
		{ "ARRAY", 7 },
		{ "RECORD", 8 },
		{ "VAR", 9 },
		{ "BEGIN", 10 },
		{ "END", 11 },
		{ "OF", 12 },
		{ "IF", 13 },
		{ "THEN", 14 },
		{ "ELSE", 15 },
		{ "WHILE", 16 },
		{ "DO", 17 },
		{ "NOT", 18 },
		{ "TRUE", 19 },
		{ "FALSE", 20 },
		{ "READ", 21 },
		{ "WRITE", 22 },
		{ "COMMA", 37 },
		{ "SEMICOLON", 38 },
		{ "DEFINE", 39 },
		{ "LEFTCUBE", 40 },
		{ "RIGHTCUBE", 41 },
		{ "LEFTCIRCLE", 42 },
		{ "RIGHTCIRCLE", 43 },
		{ "PROGRAMEND", 45 },
		{ "NUM", 46 },
		{ "DIGITS", 47 },
		{ "ID", 48 },
		{ "RELOP", 49 },
		{ "ADDOP", 50 },
		{ "MULOP", 51 },
		{ "ASSIGNOP", 52 },
		{ "FOR", 54 },
		{ "TO", 55 },
		{ "IFX", 56 },
		{ "error", 256 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: Program",
		"Program: program_head program_body PROGRAMEND",
		"program_head: PROGRAM ID LEFTCIRCLE identifier_list RIGHTCIRCLE SEMICOLON",
		"program_head: declarations subprogram_declarations error compound_statement",
		"identifier_list: identifier_list COMMA ID",
		"identifier_list: ID",
		"program_body: declarations subprogram_declarations compound_statement",
		"declarations: VAR declaration SEMICOLON",
		"declarations:",
		"declaration: declaration SEMICOLON identifier_list DEFINE type",
		"declaration: declaration error SEMICOLON identifier_list DEFINE type",
		"declaration: identifier_list DEFINE type",
		"type: standard_type",
		"type: ARRAY LEFTCUBE DIGITS PROGRAMEND PROGRAMEND DIGITS RIGHTCUBE OF standard_type",
		"type: RECORD declaration END",
		"standard_type: INTEGER",
		"standard_type: REAL",
		"standard_type: BOOLEAN",
		"subprogram_declarations: error subprogram_declaration",
		"subprogram_declarations: subprogram_declarations subprogram_declaration SEMICOLON",
		"subprogram_declarations:",
		"subprogram_declaration: subprogram_head declarations compound_statement",
		"subprogram_declaration: subprogram_head error declarations compound_statement",
		"subprogram_declaration: subprogram_head declarations error compound_statement",
		"$$1:",
		"subprogram_head: FUNCTION ID $$1 arguments DEFINE standard_type SEMICOLON",
		"$$2:",
		"subprogram_head: PROCEDURE ID $$2 arguments SEMICOLON",
		"arguments: LEFTCIRCLE parameter_lists RIGHTCIRCLE",
		"arguments:",
		"parameter_lists: parameter_lists SEMICOLON parameter_list",
		"parameter_lists: parameter_list",
		"parameter_lists: error parameter_list",
		"parameter_list: VAR identifier_list DEFINE type",
		"parameter_list: identifier_list DEFINE type",
		"compound_statement: BEGIN optional_statements END",
		"compound_statement: BEGIN optional_statements error END",
		"optional_statements: statement_list",
		"optional_statements:",
		"statement_list: statement_list SEMICOLON statement",
		"statement_list: statement",
		"statement: error SEMICOLON",
		"statement: variable ASSIGNOP error SEMICOLON",
		"statement: IF error THEN statement",
		"statement: IF expression error statement",
		"statement: IF expression THEN error ELSE statement",
		"statement: WHILE error DO statement",
		"statement: WHILE expression error statement",
		"statement: FOR error DO statement",
		"statement: FOR range error statement",
		"statement: variable ASSIGNOP expression",
		"statement: procedure_call_statement",
		"statement: compound_statement",
		"statement: IF expression THEN statement",
		"statement: IF expression THEN statement ELSE statement",
		"$$3:",
		"statement: WHILE expression $$3 DO statement",
		"statement: FOR range DO statement",
		"statement: READ LEFTCIRCLE identifier_list RIGHTCIRCLE",
		"statement: WRITE LEFTCIRCLE expr_list RIGHTCIRCLE",
		"range: ID ASSIGNOP limit TO limit",
		"limit: ID",
		"limit: DIGITS",
		"limit: ID LEFTCIRCLE expr_list RIGHTCIRCLE",
		"limit: ID LEFTCUBE expression RIGHTCUBE",
		"variable: ID",
		"variable: ID LEFTCUBE expression RIGHTCUBE",
		"procedure_call_statement: ID",
		"procedure_call_statement: ID LEFTCIRCLE expr_list RIGHTCIRCLE",
		"expr_list: expr_list COMMA expression",
		"expr_list: expression",
		"expression: simple_expr RELOP simple_expr",
		"expression: simple_expr",
		"simple_expr: simple_expr ADDOP term",
		"simple_expr: term",
		"simple_expr: sign term",
		"term: term MULOP factor",
		"term: factor",
		"factor: ID",
		"factor: ID LEFTCIRCLE expr_list RIGHTCIRCLE",
		"factor: ID LEFTCUBE expression RIGHTCUBE",
		"factor: DIGITS",
		"factor: NUM",
		"factor: LEFTCIRCLE expression RIGHTCIRCLE",
		"factor: NOT factor",
		"factor: TRUE",
		"factor: FALSE",
		"sign: ADDOP"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 3, 0 },
		{ 2, 6, 1 },
		{ 2, 4, 2 },
		{ 3, 3, 3 },
		{ 3, 1, 4 },
		{ 4, 3, 5 },
		{ 5, 3, 6 },
		{ 5, 0, 7 },
		{ 6, 5, 8 },
		{ 6, 6, 9 },
		{ 6, 3, 10 },
		{ 7, 1, 11 },
		{ 7, 9, 12 },
		{ 7, 3, 13 },
		{ 8, 1, 14 },
		{ 8, 1, 15 },
		{ 8, 1, 16 },
		{ 9, 2, 17 },
		{ 9, 3, 18 },
		{ 9, 0, 19 },
		{ 10, 3, 20 },
		{ 10, 4, 21 },
		{ 10, 4, 22 },
		{ 12, 0, 23 },
		{ 11, 7, 24 },
		{ 13, 0, 25 },
		{ 11, 5, 26 },
		{ 14, 3, 27 },
		{ 14, 0, 28 },
		{ 15, 3, 29 },
		{ 15, 1, 30 },
		{ 15, 2, 31 },
		{ 16, 4, 32 },
		{ 16, 3, 33 },
		{ 17, 3, 34 },
		{ 17, 4, 35 },
		{ 18, 1, 36 },
		{ 18, 0, 37 },
		{ 19, 3, 38 },
		{ 19, 1, 39 },
		{ 20, 2, 40 },
		{ 20, 4, 41 },
		{ 20, 4, 42 },
		{ 20, 4, 43 },
		{ 20, 6, 44 },
		{ 20, 4, 45 },
		{ 20, 4, 46 },
		{ 20, 4, 47 },
		{ 20, 4, 48 },
		{ 20, 3, 49 },
		{ 20, 1, 50 },
		{ 20, 1, 51 },
		{ 20, 4, 52 },
		{ 20, 6, 53 },
		{ 21, 0, 54 },
		{ 20, 5, 55 },
		{ 20, 4, 56 },
		{ 20, 4, 57 },
		{ 20, 4, 58 },
		{ 22, 5, 59 },
		{ 23, 1, 60 },
		{ 23, 1, 61 },
		{ 23, 4, 62 },
		{ 23, 4, 63 },
		{ 24, 1, 64 },
		{ 24, 4, 65 },
		{ 25, 1, 66 },
		{ 25, 4, 67 },
		{ 26, 3, 68 },
		{ 26, 1, 69 },
		{ 27, 3, 70 },
		{ 27, 1, 71 },
		{ 28, 3, 72 },
		{ 28, 1, 73 },
		{ 28, 2, 74 },
		{ 29, 3, 75 },
		{ 29, 1, 76 },
		{ 30, 1, 77 },
		{ 30, 4, 78 },
		{ 30, 4, 79 },
		{ 30, 1, 80 },
		{ 30, 1, 81 },
		{ 30, 3, 82 },
		{ 30, 2, 83 },
		{ 30, 1, 84 },
		{ 30, 1, 85 },
		{ 31, 1, 86 }
	};
	yyreduction = reduction;

	yytokenaction_size = 256;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 42, YYAT_SHIFT, 42 },
		{ 184, YYAT_SHIFT, 56 },
		{ 21, YYAT_SHIFT, 2 },
		{ 42, YYAT_SHIFT, 56 },
		{ 184, YYAT_SHIFT, 57 },
		{ 65, YYAT_SHIFT, 105 },
		{ 42, YYAT_SHIFT, 57 },
		{ 9, YYAT_SHIFT, 17 },
		{ 102, YYAT_SHIFT, 138 },
		{ 184, YYAT_SHIFT, 58 },
		{ 184, YYAT_SHIFT, 59 },
		{ 42, YYAT_SHIFT, 58 },
		{ 42, YYAT_SHIFT, 59 },
		{ 93, YYAT_SHIFT, 126 },
		{ 61, YYAT_SHIFT, 100 },
		{ 0, YYAT_SHIFT, 1 },
		{ 48, YYAT_SHIFT, 71 },
		{ 188, YYAT_SHIFT, 80 },
		{ 188, YYAT_SHIFT, 81 },
		{ 188, YYAT_SHIFT, 82 },
		{ 60, YYAT_SHIFT, 98 },
		{ 195, YYAT_SHIFT, 165 },
		{ 60, YYAT_SHIFT, 99 },
		{ 0, YYAT_SHIFT, 2 },
		{ 131, YYAT_SHIFT, 15 },
		{ 194, YYAT_SHIFT, 198 },
		{ 114, YYAT_SHIFT, 148 },
		{ 195, YYAT_SHIFT, 199 },
		{ 189, YYAT_SHIFT, 169 },
		{ 189, YYAT_SHIFT, 170 },
		{ 131, YYAT_SHIFT, 164 },
		{ 114, YYAT_SHIFT, 149 },
		{ 60, YYAT_REDUCE, 65 },
		{ 197, YYAT_SHIFT, 29 },
		{ 197, YYAT_SHIFT, 30 },
		{ 197, YYAT_SHIFT, 31 },
		{ 184, YYAT_SHIFT, 60 },
		{ 170, YYAT_SHIFT, 187 },
		{ 42, YYAT_SHIFT, 60 },
		{ 170, YYAT_SHIFT, 188 },
		{ 190, YYAT_SHIFT, 197 },
		{ 188, YYAT_SHIFT, 83 },
		{ 184, YYAT_SHIFT, 61 },
		{ 48, YYAT_SHIFT, 72 },
		{ 42, YYAT_SHIFT, 61 },
		{ 188, YYAT_SHIFT, 84 },
		{ 188, YYAT_SHIFT, 85 },
		{ 188, YYAT_SHIFT, 86 },
		{ 145, YYAT_SHIFT, 15 },
		{ 188, YYAT_SHIFT, 87 },
		{ 145, YYAT_SHIFT, 177 },
		{ 86, YYAT_SHIFT, 119 },
		{ 176, YYAT_SHIFT, 190 },
		{ 86, YYAT_SHIFT, 120 },
		{ 177, YYAT_SHIFT, 32 },
		{ 177, YYAT_SHIFT, 33 },
		{ 92, YYAT_SHIFT, 124 },
		{ 92, YYAT_SHIFT, 125 },
		{ 25, YYAT_SHIFT, 19 },
		{ 25, YYAT_SHIFT, 20 },
		{ 171, YYAT_SHIFT, 189 },
		{ 159, YYAT_SHIFT, 184 },
		{ 158, YYAT_SHIFT, 183 },
		{ 157, YYAT_SHIFT, 123 },
		{ 156, YYAT_SHIFT, 125 },
		{ 153, YYAT_SHIFT, 182 },
		{ 152, YYAT_SHIFT, 181 },
		{ 150, YYAT_SHIFT, 180 },
		{ 148, YYAT_SHIFT, 110 },
		{ 144, YYAT_SHIFT, 176 },
		{ 142, YYAT_SHIFT, 175 },
		{ 135, YYAT_SHIFT, 168 },
		{ 134, YYAT_SHIFT, 167 },
		{ 132, YYAT_SHIFT, 166 },
		{ 130, YYAT_SHIFT, 163 },
		{ 126, YYAT_SHIFT, 158 },
		{ 125, YYAT_ERROR, 0 },
		{ 122, YYAT_SHIFT, 123 },
		{ 118, YYAT_SHIFT, 151 },
		{ 113, YYAT_SHIFT, 147 },
		{ 110, YYAT_SHIFT, 7 },
		{ 108, YYAT_SHIFT, 144 },
		{ 107, YYAT_SHIFT, 142 },
		{ 106, YYAT_SHIFT, 141 },
		{ 101, YYAT_SHIFT, 137 },
		{ 100, YYAT_SHIFT, 136 },
		{ 95, YYAT_SHIFT, 129 },
		{ 94, YYAT_SHIFT, 128 },
		{ 91, YYAT_SHIFT, 123 },
		{ 88, YYAT_SHIFT, 121 },
		{ 77, YYAT_SHIFT, 116 },
		{ 76, YYAT_SHIFT, 115 },
		{ 75, YYAT_SHIFT, 111 },
		{ 70, YYAT_SHIFT, 108 },
		{ 67, YYAT_SHIFT, 107 },
		{ 64, YYAT_SHIFT, 104 },
		{ 62, YYAT_SHIFT, 103 },
		{ 59, YYAT_SHIFT, 97 },
		{ 58, YYAT_SHIFT, 96 },
		{ 57, YYAT_SHIFT, 94 },
		{ 56, YYAT_SHIFT, 88 },
		{ 54, YYAT_SHIFT, 42 },
		{ 52, YYAT_SHIFT, 75 },
		{ 51, YYAT_SHIFT, 75 },
		{ 50, YYAT_SHIFT, 74 },
		{ 47, YYAT_SHIFT, 70 },
		{ 46, YYAT_SHIFT, 69 },
		{ 41, YYAT_SHIFT, 54 },
		{ 40, YYAT_SHIFT, 2 },
		{ 36, YYAT_SHIFT, 49 },
		{ 32, YYAT_SHIFT, 47 },
		{ 27, YYAT_SHIFT, 46 },
		{ 24, YYAT_SHIFT, 44 },
		{ 20, YYAT_SHIFT, 39 },
		{ 19, YYAT_SHIFT, 38 },
		{ 18, YYAT_SHIFT, 37 },
		{ 17, YYAT_SHIFT, 7 },
		{ 15, YYAT_SHIFT, 28 },
		{ 13, YYAT_SHIFT, 26 },
		{ 12, YYAT_SHIFT, 10 },
		{ 11, YYAT_SHIFT, 23 },
		{ 10, YYAT_ERROR, 0 },
		{ 8, YYAT_SHIFT, 16 },
		{ 6, YYAT_SHIFT, 14 },
		{ 5, YYAT_SHIFT, 2 },
		{ 4, YYAT_SHIFT, 10 },
		{ 3, YYAT_ACCEPT, 0 },
		{ 1, YYAT_SHIFT, 6 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 61, YYAT_SHIFT, 101 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 9, YYAT_SHIFT, 18 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 184, YYAT_SHIFT, 62 },
		{ -1, YYAT_ERROR, 0 },
		{ 42, YYAT_SHIFT, 62 },
		{ 102, YYAT_SHIFT, 139 },
		{ -1, YYAT_ERROR, 0 },
		{ 21, YYAT_SHIFT, 40 },
		{ 65, YYAT_SHIFT, 106 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 93, YYAT_SHIFT, 127 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ 14, 1, YYAT_REDUCE, 8 },
		{ 79, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 126, 1, YYAT_ERROR, 0 },
		{ -131, 1, YYAT_REDUCE, 20 },
		{ 115, 1, YYAT_REDUCE, 8 },
		{ 81, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 83, 1, YYAT_DEFAULT, 145 },
		{ -31, 1, YYAT_ERROR, 0 },
		{ 111, 1, YYAT_DEFAULT, 25 },
		{ -136, 1, YYAT_DEFAULT, 10 },
		{ -137, 1, YYAT_REDUCE, 20 },
		{ 73, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 69, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 177 },
		{ 68, 1, YYAT_REDUCE, 7 },
		{ 77, 1, YYAT_ERROR, 0 },
		{ 66, 1, YYAT_ERROR, 0 },
		{ 65, 1, YYAT_ERROR, 0 },
		{ -7, 1, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_DEFAULT, 54 },
		{ 74, 1, YYAT_ERROR, 0 },
		{ 56, 1, YYAT_DEFAULT, 54 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 68, 1, YYAT_DEFAULT, 131 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 70, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 70, 1, YYAT_DEFAULT, 145 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 99, 1, YYAT_REDUCE, 8 },
		{ -149, 1, YYAT_DEFAULT, 54 },
		{ -10, 1, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 68, 1, YYAT_ERROR, 0 },
		{ 58, 1, YYAT_ERROR, 0 },
		{ 5, 1, YYAT_DEFAULT, 9 },
		{ 0, 0, YYAT_DEFAULT, 177 },
		{ 65, 1, YYAT_DEFAULT, 145 },
		{ 61, 1, YYAT_REDUCE, 29 },
		{ 60, 1, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_DEFAULT, 54 },
		{ 91, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 21 },
		{ -156, 1, YYAT_DEFAULT, 188 },
		{ -157, 1, YYAT_DEFAULT, 188 },
		{ 56, 1, YYAT_ERROR, 0 },
		{ 55, 1, YYAT_ERROR, 0 },
		{ -20, 1, YYAT_REDUCE, 67 },
		{ -34, 1, YYAT_ERROR, 0 },
		{ 58, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 57, 1, YYAT_REDUCE, 37 },
		{ -6, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ 42, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 48, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_DEFAULT, 177 },
		{ -164, 1, YYAT_DEFAULT, 148 },
		{ 52, 1, YYAT_ERROR, 0 },
		{ 52, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_DEFAULT, 125 },
		{ 0, 0, YYAT_REDUCE, 85 },
		{ 0, 0, YYAT_REDUCE, 86 },
		{ 0, 0, YYAT_DEFAULT, 188 },
		{ 0, 0, YYAT_REDUCE, 82 },
		{ 0, 0, YYAT_REDUCE, 81 },
		{ 11, 1, YYAT_REDUCE, 78 },
		{ 0, 0, YYAT_REDUCE, 87 },
		{ 75, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 125 },
		{ 0, 0, YYAT_REDUCE, 77 },
		{ 37, 1, YYAT_REDUCE, 74 },
		{ 7, 1, YYAT_REDUCE, 72 },
		{ -1, 1, YYAT_ERROR, 0 },
		{ 70, 1, YYAT_ERROR, 0 },
		{ -170, 1, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_DEFAULT, 188 },
		{ 0, 0, YYAT_DEFAULT, 188 },
		{ 0, 0, YYAT_DEFAULT, 188 },
		{ 33, 1, YYAT_ERROR, 0 },
		{ 67, 1, YYAT_ERROR, 0 },
		{ -9, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 72, 1, YYAT_ERROR, 0 },
		{ -174, 1, YYAT_DEFAULT, 188 },
		{ 36, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 32, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 148 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 40, 1, YYAT_DEFAULT, 145 },
		{ -12, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 197 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 84 },
		{ 35, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 188 },
		{ 0, 0, YYAT_DEFAULT, 188 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ 26, 1, YYAT_REDUCE, 75 },
		{ 0, 0, YYAT_DEFAULT, 125 },
		{ 0, 0, YYAT_DEFAULT, 188 },
		{ 26, 1, YYAT_DEFAULT, 188 },
		{ -181, 1, YYAT_DEFAULT, 184 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ 57, 1, YYAT_ERROR, 0 },
		{ -13, 1, YYAT_ERROR, 0 },
		{ 30, 1, YYAT_DEFAULT, 195 },
		{ 0, 0, YYAT_REDUCE, 70 },
		{ 31, 1, YYAT_ERROR, 0 },
		{ 28, 1, YYAT_DEFAULT, 195 },
		{ 0, 0, YYAT_DEFAULT, 189 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 32, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 22, 1, YYAT_ERROR, 0 },
		{ 11, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_DEFAULT, 177 },
		{ 59, 1, YYAT_DEFAULT, 110 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 29, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 83 },
		{ 25, 1, YYAT_ERROR, 0 },
		{ 22, 1, YYAT_DEFAULT, 195 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_REDUCE, 76 },
		{ 14, 1, YYAT_REDUCE, 71 },
		{ 12, 1, YYAT_REDUCE, 73 },
		{ 47, 1, YYAT_DEFAULT, 62 },
		{ 46, 1, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_DEFAULT, 188 },
		{ 0, 0, YYAT_REDUCE, 59 },
		{ 0, 0, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 68 },
		{ 0, 0, YYAT_REDUCE, 62 },
		{ -3, 1, YYAT_REDUCE, 61 },
		{ 5, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 11, 1, YYAT_ERROR, 0 },
		{ 47, 1, YYAT_DEFAULT, 197 },
		{ 0, 0, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ 0, 0, YYAT_REDUCE, 80 },
		{ 0, 0, YYAT_REDUCE, 79 },
		{ 0, 0, YYAT_DEFAULT, 184 },
		{ -12, 1, YYAT_DEFAULT, 54 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 69 },
		{ 0, 0, YYAT_DEFAULT, 188 },
		{ -1, 1, YYAT_ERROR, 0 },
		{ -19, 1, YYAT_ERROR, 0 },
		{ 28, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ -16, 1, YYAT_ERROR, 0 },
		{ -16, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 60 },
		{ 29, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 0, 0, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_REDUCE, 13 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 89;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 188, 195 },
		{ 188, 133 },
		{ 188, 92 },
		{ 188, 91 },
		{ 184, 68 },
		{ 188, 89 },
		{ 148, 113 },
		{ 184, 193 },
		{ 25, 24 },
		{ 25, 21 },
		{ 197, 200 },
		{ 184, 67 },
		{ 184, 66 },
		{ 0, 3 },
		{ 0, 5 },
		{ 25, 45 },
		{ 189, 196 },
		{ 0, 4 },
		{ 183, 192 },
		{ 148, 179 },
		{ 42, 65 },
		{ 42, 64 },
		{ 42, 63 },
		{ 33, 8 },
		{ 187, -1 },
		{ 187, 194 },
		{ 33, 48 },
		{ 177, 191 },
		{ 177, 34 },
		{ 125, 157 },
		{ 125, 90 },
		{ 124, -1 },
		{ 124, 156 },
		{ 75, 114 },
		{ 75, 112 },
		{ 5, 13 },
		{ 5, 12 },
		{ 165, 186 },
		{ 163, 185 },
		{ 147, 178 },
		{ 139, 174 },
		{ 138, 173 },
		{ 137, 172 },
		{ 136, 171 },
		{ 129, 162 },
		{ 128, 161 },
		{ 127, 160 },
		{ 126, 159 },
		{ 123, 155 },
		{ 121, 154 },
		{ 120, 153 },
		{ 119, 152 },
		{ 115, 150 },
		{ 111, 146 },
		{ 110, 145 },
		{ 107, 143 },
		{ 104, 140 },
		{ 99, 135 },
		{ 98, 134 },
		{ 97, 132 },
		{ 96, 131 },
		{ 95, 130 },
		{ 89, 122 },
		{ 83, 118 },
		{ 80, 117 },
		{ 74, 109 },
		{ 72, 36 },
		{ 61, 102 },
		{ 57, 95 },
		{ 56, 93 },
		{ 54, 79 },
		{ 53, 78 },
		{ 52, 77 },
		{ 51, 76 },
		{ 49, 73 },
		{ 41, 55 },
		{ 40, 53 },
		{ 39, 52 },
		{ 38, 51 },
		{ 37, 50 },
		{ 23, 43 },
		{ 21, 41 },
		{ 16, 35 },
		{ 14, 27 },
		{ 12, 25 },
		{ 11, -1 },
		{ 10, 22 },
		{ 4, 11 },
		{ 2, 9 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 12, -1 },
		{ 0, -1 },
		{ 82, 33 },
		{ 0, -1 },
		{ 78, -1 },
		{ 31, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 76, 11 },
		{ 68, 25 },
		{ 75, -1 },
		{ 0, -1 },
		{ 80, -1 },
		{ 0, -1 },
		{ 75, 177 },
		{ 0, 72 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 76, -1 },
		{ 0, -1 },
		{ 63, -1 },
		{ 0, -1 },
		{ -2, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 76, -1 },
		{ 66, -1 },
		{ 64, -1 },
		{ 71, -1 },
		{ 58, -1 },
		{ 2, 184 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 67, 177 },
		{ 0, -1 },
		{ 59, -1 },
		{ 58, -1 },
		{ 54, -1 },
		{ 53, -1 },
		{ 0, -1 },
		{ 42, 187 },
		{ 41, 187 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 45, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 63, -1 },
		{ 0, -1 },
		{ 58, 177 },
		{ 18, 148 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 34, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 36, 187 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 33, 125 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 40, -1 },
		{ 57, -1 },
		{ 33, 188 },
		{ 31, 187 },
		{ 31, 188 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 36, 184 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, 187 },
		{ 0, -1 },
		{ 0, -1 },
		{ 51, -1 },
		{ 37, 148 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 44, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 24, 187 },
		{ 24, 188 },
		{ 29, 184 },
		{ 0, -1 },
		{ 18, -1 },
		{ 4, 187 },
		{ 0, -1 },
		{ 27, 184 },
		{ 26, 184 },
		{ 25, 184 },
		{ 24, 184 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, -1 },
		{ 22, 184 },
		{ 21, 184 },
		{ 20, 184 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 32, 177 },
		{ 3, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, 184 },
		{ 0, -1 },
		{ 10, 187 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -2, 184 },
		{ -13, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -2, 188 },
		{ -26, 125 },
		{ -7, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 2, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 876 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

