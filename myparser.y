%{
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

%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition
{
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
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// attribute type
%include {
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
}

%token PROGRAM 1
%token FUNCTION 2
%token PROCEDURE 3 
%token INTEGER 4
%token REAL 5
%token BOOLEAN 6
%token ARRAY 7
%token RECORD 8
%token VAR 9
%token BEGIN 10
%token END 11
%token OF 12
%token IF 13
%token THEN 14
%token ELSE 15
%token WHILE 16
%token DO 17
%token NOT 18
%token TRUE 19
%token FALSE 20
%token READ 21
%token WRITE 22
%token COMMA 37
%token SEMICOLON 38
%token DEFINE 39
%token LEFTCUBE 40
%token RIGHTCUBE 41
%token LEFTCIRCLE 42
%token RIGHTCIRCLE 43
%token PROGRAMEND 45
%token NUM 46
%token DIGITS 47
%token ID 48
%token RELOP 49
%token ADDOP 50
%token MULOP 51
%token ASSIGNOP 52
%token SYMBOL 53
%token FOR 54
%token TO 55

%left RELOP
%left ADDOP
%left MULOP
%right SYMBOL

%nonassoc IFX
%nonassoc ELSE

// place any declarations here

%%


/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)
Program						: program_head program_body PROGRAMEND //进行最后的错误汇总并决定是否输出结果
							{
								if(!hasError)
								{
									cout << "Compile Succeed!" << endl;
									cout << $2.value << endl;
									outfile << $2.value << endl;
									outfile.close();
								}
								else
								{
									cout << "Error Detected!" << endl;
								}
							}
							;
									
program_head				: PROGRAM ID LEFTCIRCLE identifier_list RIGHTCIRCLE SEMICOLON 
							{
								$$.value = "program " + $2.value +"(" + $4.value + ");";
							}
							| declarations subprogram_declarations error compound_statement 
							{ 
								yyerrok(); 
								hasError = true;
							}
							;
																		
identifier_list				: identifier_list COMMA ID 
							{
								$$.value = $1.value + ", " + $3.value;
							}
							| ID 
							{
								$$.value = $1.value;
							}
							;
										
program_body				: declarations subprogram_declarations compound_statement //在此处对程序的几个主要部分进行拼接,代码生成完成
							{
								$$.value = "#include<stdio.h>\n" + $1.value + "\n" + $2.value + "\n" + "int main()\n{\n" + $3.value + "return 0;\n}\n";
							}
							;
							
declarations				: VAR declaration SEMICOLON 
							{
								$$.value = $2.value + ";";
							}
							| 
							{
								$$.value = "";
							}
							;
							
declaration					: declaration SEMICOLON identifier_list DEFINE type //调用了字符串处理函数,把Pascal风格的声明语句转换成C风格的声明语句并进行重复声明检查
							{	
								$$.value = otherDefineTransform($1.value, $3.value, $5.value);
							}
							| declaration error SEMICOLON identifier_list DEFINE type
							{
								yyerrok(); 
								hasError = true; 
							}
							| identifier_list DEFINE type //调用了字符串处理函数,把Pascal风格的声明语句转换成C风格的声明语句并进行重复声明检查,根据文法调用的函数稍有不同
							{								
								$$.value = defineTransform($1.value, $3.value);
							}
							;
							
type						: standard_type 
							{
								$$.value = $1.value; //Pascal和C语言之间的类型对应:integer(int) real(float) boolean(int:0/1)
							} 
							| ARRAY LEFTCUBE DIGITS PROGRAMEND PROGRAMEND DIGITS RIGHTCUBE OF standard_type //对数组类型的语法成分属性做了特殊处理
							{
								int lower, upper;
								string len;
								stringstream ss,ss2,ss3;
								ss << $3.value;
								ss >> lower;
								ss2 << $6.value;
								ss2 >> upper;	
								ss3 << upper - lower + 1;
								ss3 >> len;
								$$.value = $9.value + "[" + len + "]" + $3.value + "|" + $6.value + "\n"; //生成式左侧的语法属性将带有数组类型,长度,上下界,便于下一步规约做符号表的插入(int[5]0|4)
							}
							| RECORD declaration END 
							{
								$$.value = "struct{\n" + $2.value + ";\n}\n";
							}
							;
							
standard_type				: INTEGER 
							{
								$$.value = "int";
							}
							| REAL 
							{
								$$.value = "float";
							}
							| BOOLEAN 
							{
								$$.value = "boolint"; //1 = TRUE, 0 = FALSE
							}
							;
							
subprogram_declarations		: error subprogram_declaration 
							{
								yyerrok(); 
								hasError = true; 
							}
							| subprogram_declarations subprogram_declaration SEMICOLON 
							{
								$$.value = $1.value + $2.value;
							}
							|
							{
								$$.value = "";
							}
							;
							
subprogram_declaration		: subprogram_head declarations compound_statement //重定位操作
							{
								$$.value = $1.value + "\n{\n" + $2.value + "\n" + $3.value + "}\n";
								top=indexstack[indextop-1];
                                indextop--;
							}
                            | subprogram_head error declarations compound_statement 
							{
								yyerrok(); 
								hasError = true;
							}
							| subprogram_head declarations error compound_statement 
							{
								yyerrok(); 
								hasError = true;
							}
							;
subprogram_head				: FUNCTION ID //定位操作
							{
								tablestack[top].value=$2.value;
								indexstack[indextop]=top;
								top++;
								indextop++;
							}
							arguments DEFINE standard_type SEMICOLON //符号表插入函数
                            {
								addFname($2.value,$6.value);
								$$.value = $6.value + " " + $2.value + "(" + $4.value + ")";
							}	 
							| PROCEDURE ID //定位操作
							{
								tablestack[top].value=$2.value;
								indexstack[indextop]=top;
								top++;
								indextop++;
							} 
							arguments SEMICOLON //符号表插入过程
							{
								if($4.value=="")
									addFunction("","");
								addFname($2.value,"");
								$$.value = "void " + $2.value + "(" + $4.value + ")";
							}
							;
							
arguments					: LEFTCIRCLE parameter_lists RIGHTCIRCLE 
							{
								$$.value = $2.value;
							}
							| 
							{
								$$.value = "";
							}
							;
							
parameter_lists				: parameter_lists SEMICOLON parameter_list 
							{
								$$.value = $1.value + ", " + $3.value;
							}
							| parameter_list 
							{
								$$.value = $1.value;
							}
							| error parameter_list 
							{
								yyerrok(); 
								hasError = true;
							}
							;
							
parameter_list				: VAR identifier_list DEFINE type //调用了字符串处理函数,把Pascal风格的形参列表转换成C风格的形参列表并进行形参重名检查
							{	
								$$.value = parameterTransform($2.value, $4.value);
							}
							| identifier_list DEFINE type //调用了字符串处理函数,把Pascal风格的形参列表转换成C风格的形参列表并进行形参重名检查
							{	
								$$.value = otherParameterTransform($1.value, $3.value);										
							}
							;
							
compound_statement			: BEGIN optional_statements END 
							{
								$$.value = $2.value;
							}
							| BEGIN optional_statements error END 
							{
								yyerrok(); 
								hasError = true;
							}
							;
							
optional_statements			: statement_list 
							{
								$$.value = $1.value;
							}
							|
							{
								$$.value = "";
							}
							;
							
statement_list				: statement_list SEMICOLON statement 
							{
								$$.value = $1.value + $3.value;
							}
							| statement 
							{
								$$.value = $1.value;
							}
							;
							
statement					: error SEMICOLON 
							{
								yyerrok();
								yyclearin(); 
								hasError = true;
							}
							| variable ASSIGNOP error SEMICOLON 
							{
								yyerrok();
								yyclearin(); 
								hasError = true;
							}
							| IF error THEN statement  
							{
								yyerrok();
								hasError = true;
							}
							| IF expression error statement 
							{
								yyerrok(); 
								hasError = true;
							}
							| IF expression THEN error ELSE statement 
							{
								yyerrok(); 
								hasError = true;
							}
							| WHILE error DO statement 
							{
								yyerrok(); 
								hasError = true;
							}
							| WHILE expression error statement 
							{
								yyerrok(); 
								hasError = true;
							}
							| FOR error DO statement 
							{
								yyerrok(); 
								hasError = true;
							}
							| FOR range error statement 
							{
								yyerrok(); 
								hasError = true;
							}
							
							| variable ASSIGNOP expression //对赋值语句左侧是变量名还是函数名进行判断:生成正确的C代码
							{
								if(checkFunction($1.value, "") == "false")
									$$.value = $1.value + " = " + $3.value + ";\n";
								else if(CheckFunction($1.value) != "false")
									$$.value = "return " + $3.value + ";\n";
							    if($1.type!=$3.type&&checkFunction($1.value, "") == "false")
								{
								   //cout<<$1.type<<" "<<$3.type<<"!!!"<<endl;
								   cout<<lineno+1<<":";
								   yyerror("type error in ASSIGNOP statement");
								   hasError = true;
								}
								
							}
							| procedure_call_statement 
							{
								$$.value = $1.value + ";\n";
							}
							| compound_statement 
							{
								$$.value = $1.value;
							}
							| IF expression THEN statement %prec IFX //新加入的IF expression THEN statement文法
							{
								$$.value = "if(" + $2.value + ")\n{\n" + $4.value + "}\n";
								if($2.type!="bool")
								{
									cout<<lineno-1<<":";
									yyerror("error in if expression type");
									hasError = true;
								}
							}
							| IF expression THEN statement ELSE statement 
							{
								$$.value = "if(" + $2.value + ")\n{\n" + $4.value + "}\nelse\n{\n" + $6.value + "}\n";
								if($2.type!="bool")
								{
									cout<<lineno-1<<":";
									yyerror("error in if expression type");
									hasError = true;
								}
							}
							| WHILE expression
							{
								if($2.type!="bool")
								{
									cout<<lineno+1<<":";
									yyerror("error in while expression type");
									hasError = true;
								}
							} 
							DO statement	
							{
								$$.value = "while(" + $2.value + ")\n{\n" + $5.value + "}\n";
							}
							| FOR range DO statement //新加入的FOR range DO statement文法
							{
								$$.value = $2.value + "\n{\n" + $4.value + "}\n";
							}
							| READ LEFTCIRCLE identifier_list RIGHTCIRCLE	
							{
								$$.value = readTransform($3.value);					
							}
							| WRITE LEFTCIRCLE expr_list RIGHTCIRCLE   
							{
								$$.value = writeTransform($3.value);	
							}
							;

range						: ID ASSIGNOP limit TO limit 
							{
								$$.value = "for(" + $1.value + " = " + $3.value + "; " + $1.value + " < " + $5.value + "; " + $1.value + "++)";
								if($1.type!="int")
								{
									cout<<lineno+1<<":";
									yyerror("range is wrong in for");
									hasError = true;
								}
								if($3.value>$5.value)
								{
									cout<<lineno+1<<":";
									yyerror("range is illegal in for");
									hasError = true;
								}
                            }
							;
							
limit						: ID 
							{
								$$.value = $1.value;
							}
							| DIGITS 
							{
								$$.value = $1.value;
							}
							| ID LEFTCIRCLE expr_list RIGHTCIRCLE  
							{
								$$.value = $1.value + "(" + $3.value + ")";
							}
							| ID LEFTCUBE expression RIGHTCUBE  //判断数组变量引用的有效性:是否越界?数组是否声明?
							{
								$$.value = arrayCheck($1.value, $3.value);
							}
							;
							
variable					: ID 
							{
								$$.value = $1.value;
								int i;
								string funcexist;
								funcexist=checkFunction($1.value,"");
								for(i=0;i<top;i++)
								{
									if(tablestack[i].value==$1.value)
									{  
									   $1.type=tablestack[i].type;
									   break;
									}
								}
								if(i==top&&funcexist == "false")
								{
									cout<<lineno+1<<":";
									cout<<$1.value<<" ";
									yyerror("hasn't been declared");
									hasError = true;
								}
								$$.type=$1.type;
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
							}
							| ID LEFTCUBE expression RIGHTCUBE  //判断数组变量引用的有效性:是否越界?数组是否声明?
							{
								$$.value = arrayCheck($1.value, $3.value);
							}
							;
							
procedure_call_statement	: ID	
							{
								$$.value = $1.value + "()";
								string funcexist;
								funcexist=checkFunction($1.value,"");
								if(funcexist=="Typeerror"){
									cout<<lineno+1<<":";
									yyerror("procedure parameter error");
									hasError = true;
									}
							}
							| ID LEFTCIRCLE expr_list RIGHTCIRCLE  
							{
								$$.value = $1.value + "(" + $3.value + ")";
								string output = getTypeList($3.value);
								cout<<output<<endl;
								string funcexist;
								funcexist=checkFunction($1.value,output);
								if(funcexist=="Typeerror"){
									cout<<lineno+1<<":";
									yyerror("procedure parameter error");
									hasError = true;
									}
								//cout<<funcexist<<endl;
							}
							;
							
expr_list					: expr_list COMMA expression  
							{
								$$.value = $1.value + "," + $3.value;
							}
							| expression  
							{
								$$.value = $1.value;
							}
							;
							
expression					: simple_expr RELOP simple_expr 
							{	
								if($2.value == "=")
								{
									$$.value = $1.value + " == " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == "<>")
								{
									$$.value = $1.value + " != " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == "<")
								{
									$$.value = $1.value + " < " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == "<=")
								{
									$$.value = $1.value + " <= " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == ">")
								{
									$$.value = $1.value + " > " + $3.value;
									$$.type="bool";
								}
								else if ($2.value == ">=")
								{
									$$.value = $1.value + " >= " + $3.value;
									$$.type="bool";
								}	
								else
								{
								    cout<<lineno+1<<":";
									yyerror("Relop Error!");
									hasError = true;
								}
							}
							| simple_expr  
							{
								$$.value = $1.value;
								$$.type=$1.type;
							}
							;
							
simple_expr					: simple_expr ADDOP term	
							{	
								if($2.value == "+")
								{
									$$.value = $1.value + " + " + $3.value;
									if($1.type=="int"&&$3.value=="int")
										$$.type="int";
									else
										$$.type="float";
								}
								else if ($2.value == "-")
								{
									$$.value = $1.value + " - " + $3.value;
									if($1.type=="int"&&$3.value=="int")
										$$.type="int";
									else
										$$.type="float";
								}
								else if ($2.value == "or")
								{
									$$.value = $1.value + " | " + $3.value;
									if($1.type=="bool"&$3.type=="bool")
										$$.type="bool";
									else
									{
										cout<<lineno+1<<":";
										yyerror("type error in or");
										$$.type="bool";
										hasError = true;
									}
								}
								else
								{
								    cout<<lineno+1<<":";
									yyerror("Addop Error!");
									hasError = true;
								}
							}
							| term  
							{
								$$.value = $1.value;$$.type=$1.type;
							}
							| sign term  
							{
								$$.value = $1.value + $2.value;
								if($2.type=="bool")
								{
									cout<<lineno+1<<":";
									yyerror("sign cannot be used for bool type");
									$$.value=$2.value;
									hasError = true;
								}       
								$$.type=$2.type;
							}
							;
							
term						: term MULOP factor 
							{							
								if($2.value == "*")
								{
									$$.value = $1.value + " * " + $3.value;
									if($1.type=="int"&&$3.value=="int")
										$$.type="int";
									else
										$$.type="float";
								}
								else if ($2.value == "/")
								{
									$$.value = "(float) " + $1.value + " / " + "(float) " + $3.value;
									$$.type="float";
								}
								else if ($2.value == "div")
								{
									$$.value = $1.value + " / " + $3.value;
									if($1.type!="int"||$2.type!="int")
									{
										cout<<lineno+1<<":";
										yyerror("type error in div");
										hasError = true;
									}
									$$.type="int";
								}
								else if ($2.value == "mod")
								{	
									$$.value = $1.value + " % " + $3.value;
									if($1.type=="int"&&$3.type=="int")
										$$.type="int";
									else
									{
										cout<<lineno+1<<":";
										yyerror("type error in mod");
										$$.type="int";
										hasError = true;
									}
								}
								else if ($2.value == "and")
								{
									$$.value = $1.value + " & " + $3.value;
									if($1.type=="bool"&&$3.type=="bool")
										$$.type="bool";
									else
									{
										cout<<lineno+1<<":";
										yyerror("type error in and");
										hasError = true;
										$$.type="bool";
									}
										
									}
									else
									{
										cout<<lineno+1<<":";
										yyerror("Mulop Error!");
										hasError = true;
									}
							}
							| factor  
							{
								$$.value = $1.value;$$.type=$1.type;
							}
							;
							
factor						: ID //对ID是变量名还是无参函数调用进行判断:确保生成正确的代码
							{
								//cout << "factor->id : " << $1.value << endl;
								string funcexist;
								funcexist=checkFunction($1.value,"");
								if(funcexist == "false")
								{
								    //cout<<"notfunctip"<<endl;
									$$.value = $1.value;
									int i;
									for(i=0;i<top;i++)
									{
										if(tablestack[i].value==$1.value)
											break;
									}
									if(i==top)
									{
										cout<<lineno+1<<":";
										cout<<$1.value<<" ";
										yyerror("hasn't been declared");
										hasError = true;
									}
									else
									{
										$$.type=tablestack[i].type;
									}
								}
								else
									$$.value=$1.value+"("+")";
							}
							| ID LEFTCIRCLE expr_list RIGHTCIRCLE  
							{
								$$.value = $1.value + "(" + $3.value + ")";
								string output = getTypeList($3.value);
								//cout<<output<<endl;
								string funcexist;
								funcexist=checkFunction($1.value,output);
								if(funcexist=="Typeerror")
								{
									cout<<lineno+1<<":";
									yyerror("procedure parameter error");
									hasError = true;
								}
								else if(funcexist == "false")
								{
									cout<<lineno+1<<":";
									cout<<$1.value<<" ";
									yyerror("hasn't been declared");
									hasError = true;
								}
								string FuncExist;
								FuncExist=CheckFunction($1.value);
								{
								    $$.type=FuncExist;
								}
							}
							| ID LEFTCUBE expression RIGHTCUBE  //判断数组变量引用的有效性:是否越界?数组是否声明?并进行类型的传递
							{
								$$.value = arrayCheck($1.value, $3.value);
								$$.type = arrayType;
							}
							| DIGITS 
							{
								$$.value = $1.value;
								if($1.type.find(".",0)==-1)
									$$.type="int";
								else
									$$.type="float";
							}
							| NUM 
							{
								$$.value = $1.value;
								$$.type="int";
							}		
							| LEFTCIRCLE expression RIGHTCIRCLE 
							{
								$$.value = "(" + $2.value + ")";
								$$.type=$2.type;
							}
							| NOT factor 
							{
								$$.value = "!" + $2.value;
								$$.type=$2.type;
							}
							| TRUE 
							{
								$$.value = "1";
								$$.type="bool";
							}
							| FALSE 
							{
								$$.value = "0";
								$$.type="bool";
							}
							;
							
sign						: ADDOP
							{
								if ($1.value == "+")
									$$.value = "+";
								else if ($1.value == "-")
									$$.value = "-";
								else
								{
									yyerror("Sign Error!");
									hasError = true;
								}
							}
							;
%%

/////////////////////////////////////////////////////////////////////////////
// programs section
