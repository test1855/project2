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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 06/07/15
* Time: 01:28:29
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 35 ".\\myparser.y"

	// place any extra class members here
private:
	void myparser::yyerror(const char *str);
	string myparser::readTransform(string input);
	string myparser::writeTransform(string input);
	string myparser::defineTransform(string input, string inputType);
	string myparser::otherDefineTransform(string before, string input, string inputType);
	string myparser::parameterTransform(string input, string inputType);
	string myparser::otherParameterTransform(string input, string inputType);
	string myparser::arrayCheck(string id, string expression);
	string myparser::getTypeList(string input);

#line 79 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 60 ".\\myparser.y"

#ifndef YYSTYPE

class Data
{
public:
	string value;
	string type;
	Data()
	{
		value = "";
		type = "";
	}
};

#define YYSTYPE Data
#endif

#line 105 "myparser.h"
#define PROGRAM 1
#define FUNCTION 2
#define PROCEDURE 3
#define INTEGER 4
#define REAL 5
#define BOOLEAN 6
#define ARRAY 7
#define RECORD 8
#define VAR 9
#define BEGIN 10
#define END 11
#define OF 12
#define IF 13
#define THEN 14
#define ELSE 15
#define WHILE 16
#define DO 17
#define NOT 18
#define TRUE 19
#define FALSE 20
#define READ 21
#define WRITE 22
#define COMMA 37
#define SEMICOLON 38
#define DEFINE 39
#define LEFTCUBE 40
#define RIGHTCUBE 41
#define LEFTCIRCLE 42
#define RIGHTCIRCLE 43
#define PROGRAMEND 45
#define NUM 46
#define DIGITS 47
#define ID 48
#define RELOP 49
#define ADDOP 50
#define MULOP 51
#define ASSIGNOP 52
#define SYMBOL 53
#define FOR 54
#define TO 55
#define IFX 56
#endif
