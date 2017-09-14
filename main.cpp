#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
#include "mylexer.h"
#include "myparser.h"
#include "variable.h"
extern tablePtr symtab;
extern char *curfilename;
extern int lineno;
extern bool hasError;
extern tablenode tablestack[100];
extern int top;
extern int indextop;
extern int indexstack[100];
extern string arrayType;
extern Func functable;

ofstream outfile;
ifstream infile;
int main()
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	char buffer;
	if (symtab == NULL)
		symtab = new table;
	if (functable == NULL)
		functable = new func;
	symtab->head = NULL;
	symtab->now = NULL;
	functable->head = NULL;
	functable->current = NULL;
	infile.open("test.txt", ios::in);
	outfile.open("out.c", ios::out);
	lexer.yyin = &infile;
	if (parser.yycreate(&lexer))
	{
		if (lexer.yycreate(&parser))
		{
			n = parser.yyparse();
		}
	}
	cin >> buffer;

	return n;
}
//以下接口的设计说明请见文档部分的详细设计说明
void addType(string name, string Type)//数组类型
{
	int low;
	int up;
	string Pname[20];
	int start = 0;
	int current = 0;
	int k = 0;
	char a;
	for (int i = 0; i < name.length(); i++)
	{
		a = name[i];
		if (a == ',' || i == name.length() - 1)
		{
			current = i - current;
			Pname[k] = name.substr(start, i);
			start = i + 1;
			k++;
		}
	}

	unsigned int pos = Type.find("]", 0);
	if (pos != string::npos)
	{
		string temp;
		stringstream ss;
		int pos_comma;
		pos_comma = Type.find(",", 0);
		temp = Type.substr(pos + 1, pos_comma - pos);
		ss << temp;
		ss >> low;
		temp = Type.substr(pos_comma + 1);
		ss << temp;
		ss >> up;
	}

	for (int m = 0; m<k; m++)
	{
		struct symbol *tmp = lookup(Pname[m]);
		if (tmp != NULL&&pos != string::npos)
		{
			tmp->lowbound = low;
			tmp->upbound = up;
			tmp->dimension = 1;
			tmp->type = Type;
		}
		else
		{
			//����������
		}
	}
}

bool checkArray(string name, int index)//检查数组
{
	struct symbol *tmp = lookup(name);
	if (tmp != NULL&&tmp->dimension == 1)
	{
		if (index<tmp->lowbound || index>tmp->upbound)
			return false;
		else
			return true;
	}
	else
		return false;
}

bool checkType(string name)//检查类型
{
	struct symbol *tmp = symtab->head;
	while (tmp != NULL)
	{
		if (tmp->name == name&&tmp->dimension == 1)
			return true;
		tmp = tmp->next;
	}
	return false;
}


string myparser::getTypeList(string input)
{
	string s1 = input;
	string substr = "";
	string functionName = "";
	string functionAll = "";
	string output = "";
	string res = "";
	int pos = 0;
	int functionNamePos = 0;
	int functionAllPos = 0;
	int flag = 1;
	int count = 0;
	int i;
	string subtype = "";
	string stype = "";
	while (s1.find(' ', 0) != -1)
		s1 = s1.erase(s1.find(' ', 0), 1);
	string s2 = s1;
	stringstream *ss;
	ss = new stringstream;
	double d;
	int j;
	while (flag)
	{
		count++;
		pos = s2.find(',', 0);
		if (pos == -1)
			flag = 0;
		substr = s2.substr(0, pos);
		functionNamePos = s2.find('(', 0);
		delete ss;
		ss = new stringstream;
		*ss << substr;
		if (functionNamePos != -1 && functionNamePos < pos)
		{
			functionAllPos = s2.find(')', 0);
			functionName = s2.substr(0, functionNamePos);
			substr = s2.substr(0, functionAllPos + 1);
			pos = functionAllPos + 1;
			subtype = CheckFunction(functionName); //TODO: replace "int" with the return type from the function table
		}
		else if ((*ss >> d) && (substr.find('.', 0) == -1))
			subtype = "int";
		else if (substr.find('.', 0) != -1)
			subtype = "float";
		else
		{
			for (i = 0; i<top; i++)
			{
				if (substr == tablestack[i].value)
				{
					subtype = tablestack[i].type;
					break;
				}
			}
			//subtype = "variable"; //TODO: replace "float" with the type from the symbol table
		}
		if (count == 1)
		{
			output = output + subtype;
		}
		else
		{
			output = output + "," + subtype;
		}
		if (pos >= s2.length())
			flag = 0;
		else
			s2 = s2.substr(pos + 1);
	}
	return output;
}

string CheckFunction(string FunctionName){
	if (functable->head == NULL)
		return "false";
	else
	{
		struct functions *temp;
		temp = new struct functions;
		temp = functable->head;
		while (temp != NULL)
		{
			if (FunctionName == temp->fname)
			{
				return temp->feedback;
			}
			temp = temp->next;
		}
		return "false";
	}
}

string checkFunction(string fname, string paranow)
{
	string Pname[10];
	if (paranow != "")
	{
		int start = 0;
		int current = 0;
		int k = 0;
		char a;
		for (int i = 0; i < paranow.length(); i++)
		{
			a = paranow[i];
			if (a == ',' || i == paranow.length() - 1)
			{
				current = i - current;
				Pname[k] = paranow.substr(start, i);
				start = i + 1;
				k++;
			}
		}
	}

	if (functable->head == NULL)
		return "false";
	else
	{
		struct functions *temp;
		temp = new struct functions;
		temp = functable->head;
		while (temp!=NULL)
		{
			if (fname == temp->fname)
			{
				if (paranow != "")
				{
					int flag = 0;
					struct parameTer *tmp;
					tmp = new struct parameTer;
					tmp = temp->Parameter->head;
					while (tmp!=NULL)
					{
						if (tmp->type == Pname[flag])
						{
							tmp = tmp->next;
							flag++;
						}
						else
							return "Typeerror";
					}
				}
				return temp->feedback;
			}
			temp = temp->next;
		}
		return "false";
	}
}



void addFunction(string pname, string pType)
{
	string Pname[10];
	int start = 0;
	int current = 0;
	int k = 0;
	char a;
	if (pname.find(",") >= 0 && pname.find(",")<pname.length())
	{
		for (int i = 0; i < pname.length(); i++)
		{
			a = pname[i];
			if (a == ',' || i == pname.length() - 1)
			{
				current = i - current;
				Pname[k] = pname.substr(start, i);
				start = i + 1;
				k++;
			}
		}
	}
	k = 0;

	if (functable->head == NULL)
	{
		functable->head = new struct functions;
		functable->head->feedback = "reload";
		functable->head->fname = "reload";
		functable->head->next = NULL;
		functable->current = functable->head;
	}
	else
	{
		functable->current->next = new struct functions;
		functable->current = functable->current->next;
		functable->current->feedback = "reload";
		functable->current->fname = "reload";
		functable->current->next = NULL;
	}

	functable->current->Parameter = new struct parameters;
	functable->current->Parameter->head = NULL;

	if (pname == "")
	{
		if (functable->current->Parameter->head == NULL)
		{
			functable->current->Parameter->head = new struct parameTer;
			functable->current->Parameter->current = functable->current->Parameter->head;
		}
		else{
			functable->current->Parameter->current->next = new struct parameTer;
			functable->current->Parameter->current = functable->current->Parameter->current->next;
		}
		functable->current->Parameter->current->pname = "";
		functable->current->Parameter->current->type = "";
		functable->current->Parameter->current->next = NULL;
	}
	else
	{
		while (Pname[k] != "")
		{
			if (functable->current->Parameter->head == NULL)
			{
				functable->current->Parameter->head = new struct parameTer;
				functable->current->Parameter->current = functable->current->Parameter->head;
			}
			else{
				functable->current->Parameter->current->next = new struct parameTer;
				functable->current->Parameter->current = functable->current->Parameter->current->next;
			}
			functable->current->Parameter->current->pname = Pname[k];
			functable->current->Parameter->current->type = pType;
			functable->current->Parameter->current->next = NULL;
			k++;
		}
	}
}

void addFname(string fname, string feedBack)
{
	if (functable->current->fname == "reload"&&functable->current->feedback == "reload")
	{
		functable->current->fname = fname;
		functable->current->feedback = feedBack;
		/*functable->current->next = new struct functions;
		functable->current = functable->current->next;
		functable->current->Parameter = new struct parameters;
		functable->current->Parameter->head = new struct parameTer;
		functable->current->Parameter->current = functable->current->Parameter->head;*/
	}
}
struct symbol *lookup(string cname)
{
	struct symbol *tmp = symtab->head;
	while (tmp != NULL)
	{
		if (tmp->name == cname)
			return tmp;
		tmp = tmp->next;
	}
	return NULL;
}
void addref(int lineno, char* cname)
{
	struct symbol *tmp = lookup(cname);
	if (tmp == NULL)
	{
		if (symtab->head == NULL)
		{
			symtab->head = new struct symbol;
			symtab->now = symtab->head;
		}
		else
		{
			symtab->now->next = new struct symbol;
			symtab->now = symtab->now->next;
		}
		symtab->now->name = cname;
		symtab->now->reflist = new struct ref;
		symtab->now->nowref = symtab->now->reflist;
		symtab->now->nowref->lineno = lineno;
		symtab->now->nowref->next = NULL;
		symtab->now->next = NULL;
	}
	else
	{
		tmp->nowref->next = new struct ref;
		tmp->nowref = tmp->nowref->next;
		tmp->nowref->lineno = lineno;
		tmp->nowref->next = NULL;
	}
}

string myparser::readTransform(string input)
{
	string s1 = input;
	string substr = "";
	string output = "scanf(\"\");";
	int pos = 0;
	int flag = 1;
	int count = 0;
	int i = 0;
	string subtype = "";
	string stype = "";
	while (s1.find(' ', 0) != -1)
		s1 = s1.erase(s1.find(' ', 0), 1);
	string s2 = s1;
	while (flag)
	{
		count++;
		pos = s2.find(',', 0);
		if (pos == -1)
			flag = 0;
		substr = s2.substr(0, pos);
		for (i = 0; i<top; i++)
		{
			if (substr == tablestack[i].value)
			{
				subtype = tablestack[i].type;
				break;
			}
		}
		if (i == top)
		{
			cout << lineno + 1 << ":";
			cout << substr << " ";
			yyerror("hasn't been declared");
			hasError = true;
		}
		if (subtype == "int")
		{
			stype = "d";
		}
		else if (subtype == "float")
		{
			stype = "f";
		}
		if (count == 1)
		{
			output.insert(7, "%");
			output.insert(8, stype);
			output.insert(10, ",");
			output.insert(11, "&");
			output.insert(12, substr);
		}
		else
		{
			output.insert(3 * count + 3, ",");
			output.insert(3 * count + 4, "%");
			output.insert(3 * count + 5, stype);
			output.insert(output.length() - 2, ",");
			output.insert(output.length() - 2, "&");
			output.insert(output.length() - 2, substr);
		}
		s2 = s2.substr(pos + 1);
	}
	string res = output + "\n";
	return res;
}

string myparser::writeTransform(string input)
{
	string s1 = input;
	string substr = "";
	string functionName = "";
	string functionAll = "";
	string output = "printf(\"\");";
	string res = "";
	int pos = 0;
	int functionNamePos = 0;
	int functionAllPos = 0;
	int flag = 1;
	int count = 0;
	int i;
	string subtype = "";
	string stype = "";
	while (s1.find(' ', 0) != -1)
		s1 = s1.erase(s1.find(' ', 0), 1);
	string s2 = s1;
	while (flag)
	{
		count++;
		pos = s2.find(',', 0);
		if (pos == -1)
			flag = 0;
		substr = s2.substr(0, pos);
		functionNamePos = s2.find('(', 0);
		if (functionNamePos != -1 && functionNamePos < pos)
		{
			functionAllPos = s2.find(')', 0);
			functionName = s2.substr(0, functionNamePos);
			substr = s2.substr(0, functionAllPos + 1);
			pos = functionAllPos + 1;
			subtype = checkFunction(functionName, "");
		}
		else
		{
			for (i = 0; i<top; i++)
			{
				if (substr == tablestack[i].value)
				{
					subtype = tablestack[i].type;
					break;
				}
			}
		}
		if (subtype == "int")
		{
			stype = "d";
		}
		else if (subtype == "float")
		{
			stype = "f";
		}
		if (count == 1)
		{
			output.insert(8, "%");
			output.insert(9, stype + " ");
			output.insert(12, 1, ',');
			output.insert(13, substr);
		}
		else
		{
			output.insert(3 * count + 4, ",");
			output.insert(3 * count + 5, "%");
			output.insert(3 * count + 6, stype);
			output.insert(output.length() - 2, ",");
			output.insert(output.length() - 2, substr);
		}
		if (pos >= s2.length())
			flag = 0;
		else
			s2 = s2.substr(pos + 1);
	}
	res = output + "\n";
	return res;
}

string myparser::otherDefineTransform(string before, string input, string inputType)
{
	addType(input, inputType);
	string s1 = input;
	string substr = "";
	string output = "";
	string type = inputType;
	if (type == "boolint")
		type = "int";
	int pos = 0;
	int flag = 1;
	int count = 0;
	int i;
	while (s1.find(' ', 0) != -1)
		s1 = s1.erase(s1.find(' ', 0), 1);
	string s2 = s1;
	int begin = type.find('[', 0);
	if (begin != -1)
	{
		string arrayType = type.substr(0, begin);
		int end = type.find(']', 0);
		string arrayLength = type.substr(begin, end - begin + 1);
		while (flag)
		{
			count++;
			pos = s2.find(',', 0);
			if (pos == -1)
				flag = 0;
			substr = s2.substr(0, pos);
			if (count == 1)
			{
				for (i = indexstack[indextop - 1]; i<top; i++)
				{
					if (substr == tablestack[i].value)
						break;
				}
				if (i<top)
				{
					cout << lineno + 1 << ":";
					cout << substr << " ";
					yyerror("has been declared");
					hasError = true;
				}
				tablestack[top].value = substr;
				tablestack[top].type = inputType;
				if (inputType == "boolint")
					tablestack[top].type = "bool";
				top++;
				output = arrayType + " " + substr + arrayLength;
			}
			else
			{
				for (i = indexstack[indextop - 1]; i<top; i++)
				{
					if (substr == tablestack[i].value)
						break;
				}
				if (i<top)
				{
					cout << lineno + 1 << ":";
					cout << substr << " ";
					yyerror("has been declared");
					hasError = true;
				}
				tablestack[top].value = substr;
				tablestack[top].type = inputType;
				if (inputType == "boolint")
					tablestack[top].type = "bool";
				top++;
				output = output + ", " + substr + arrayLength;
			}
			s2 = s2.substr(pos + 1);
		}
	}
	else
	{
		while (flag)
		{
			count++;
			pos = s2.find(',', 0);
			if (pos == -1)
				flag = 0;
			substr = s2.substr(0, pos);
			if (count == 1)
			{
				for (i = indexstack[indextop - 1]; i<top; i++)
				{
					if (substr == tablestack[i].value)
						break;
				}
				if (i<top)
				{
					cout << lineno + 1 << ":";
					cout << substr << " ";
					yyerror("has been declared");
					hasError = true;
				}
				tablestack[top].value = substr;
				tablestack[top].type = inputType;
				if (inputType == "boolint")
					tablestack[top].type = "bool";
				top++;
				output = type + " " + substr;
			}
			else
			{
				for (i = indexstack[indextop - 1]; i<top; i++)
				{
					if (substr == tablestack[i].value)
						break;
				}
				if (i<top)
				{
					cout << lineno + 1 << ":";
					cout << substr << " ";
					yyerror("has been declared");
					hasError = true;
				}
				tablestack[top].value = substr;
				tablestack[top].type = inputType;
				if (inputType == "boolint")
					tablestack[top].type = "bool";
				top++;
				output = output + ", " + substr;
			}
			s2 = s2.substr(pos + 1);
		}
	}
	string res = before + ";\n" + output;
	return res;
}

string myparser::defineTransform(string input, string inputType)
{
	addType(input, inputType);
	string s1 = input;
	string substr = "";
	string output = "";
	string type = inputType;
	if (type == "boolint")
		type = "int";
	int pos = 0;
	int flag = 1;
	int count = 0;
	int i;
	while (s1.find(' ', 0) != -1)
		s1 = s1.erase(s1.find(' ', 0), 1);
	string s2 = s1;
	int begin = type.find('[', 0);
	if (begin != -1)
	{
		string arrayType = type.substr(0, begin);
		int end = type.find(']', 0);
		string arrayLength = type.substr(begin, end - begin + 1);
		while (flag)
		{
			count++;
			pos = s2.find(',', 0);
			if (pos == -1)
				flag = 0;
			substr = s2.substr(0, pos);
			if (count == 1)
			{
				for (i = indexstack[indextop - 1]; i<top; i++)
				{
					if (substr == tablestack[i].value)
						break;
				}
				if (i<top)
				{
					cout << lineno + 1 << ":";
					cout << substr << " ";
					yyerror("has been declared");
					hasError = true;
				}
				tablestack[top].value = substr;
				tablestack[top].type = inputType;
				if (inputType == "boolint")
					tablestack[top].type = "bool";
				top++;
				output = arrayType + " " + substr + arrayLength;
			}
			else
			{
				for (i = indexstack[indextop - 1]; i<top; i++)
				{
					if (substr == tablestack[i].value)
						break;
				}
				if (i<top)
				{
					cout << lineno + 1 << ":";
					cout << substr << " ";
					yyerror("has been declared");
					hasError = true;
				}
				tablestack[top].value = substr;
				tablestack[top].type = inputType;
				if (inputType == "boolint")
					tablestack[top].type = "bool";
				top++;
				output = output + ", " + substr + arrayLength;
			}
			s2 = s2.substr(pos + 1);
		}
	}
	else
	{
		while (flag)
		{
			count++;
			pos = s2.find(',', 0);
			if (pos == -1)
				flag = 0;
			substr = s2.substr(0, pos);
			if (count == 1)
			{
				for (i = indexstack[indextop - 1]; i<top; i++)
				{
					if (substr == tablestack[i].value)
						break;
				}
				if (i<top)
				{
					cout << lineno + 1 << ":";
					cout << substr << " ";
					yyerror("has been declared");
					hasError = true;
				}
				tablestack[top].value = substr;
				tablestack[top].type = inputType;
				if (inputType == "boolint")
					tablestack[top].type = "bool";
				top++;
				output = type + " " + substr;
			}
			else
			{
				for (i = indexstack[indextop - 1]; i<top; i++)
				{
					if (substr == tablestack[i].value)
						break;
				}
				if (i<top)
				{
					cout << lineno + 1 << ":";
					cout << substr << " ";
					yyerror("has been declared");
					hasError = true;
				}
				tablestack[top].value = substr;
				tablestack[top].type = inputType;
				if (inputType == "boolint")
					tablestack[top].type = "bool";
				top++;
				output = output + ", " + substr;
			}
			s2 = s2.substr(pos + 1);
		}
	}
	return output;
}

string myparser::parameterTransform(string input, string inputType)
{
	string s1 = input;
	string S1 = inputType;
	string substr = "";
	string output = "";
	string type = inputType;
	string type1 = inputType + "& ";
	int pos = 0;
	int flag = 1;
	int i;
	int count = 0;
	while (s1.find(' ', 0) != -1)
		s1 = s1.erase(s1.find(' ', 0), 1);
	string s2 = s1;
	while (flag)
	{
		count++;
		pos = s2.find(',', 0);
		if (pos == -1)
			flag = 0;
		substr = s2.substr(0, pos);
		for (i = indexstack[indextop - 1]; i<top; i++)
		{
			if (substr == tablestack[i].value)
				break;
		}
		if (i<top)
		{
			cout << lineno + 1 << ":";
			cout << substr << " ";
			yyerror("has been declared");
			hasError = true;
		}
		tablestack[top].value = substr;
		tablestack[top].type = inputType;
		top++;
		if (count == 1)
		{
			output = type1 + substr;
		}
		else
		{
			output = output + ", " + type1 + substr;
		}
		s2 = s2.substr(pos + 1);
	}
	addFunction(s1, inputType);
	return output;
}

string myparser::otherParameterTransform(string input, string inputType)
{
	string s1 = input;
	string substr = "";
	string output = "";
	string type = inputType + " ";
	int pos = 0;
	int flag = 1;
	int count = 0;
	int i;
	int begin = type.find('[', 0);
	int mode = 1;
	if (begin != -1)
	{
		type = type.substr(0, begin) + " ";
		mode = 0;
	}
	while (s1.find(' ', 0) != -1)
		s1 = s1.erase(s1.find(' ', 0), 1);
	string s2 = s1;
	while (flag)
	{
		count++;
		pos = s2.find(',', 0);
		if (pos == -1)
			flag = 0;
		substr = s2.substr(0, pos);
		for (i = indexstack[indextop - 1]; i<top; i++)
		{
			if (substr == tablestack[i].value)
				break;
		}
		if (i<top)
		{
			cout << lineno + 1 << ":";
			cout << substr << " ";
			yyerror("has been declared");
			hasError = true;
		}
		tablestack[top].value = substr;
		tablestack[top].type = inputType;
		top++;
		if (count == 1)
		{
			if (mode)
			{
				output = type + substr;
			}
			else
			{
				output = type + substr + "[]";
			}
		}
		else
		{
			if (mode)
			{
				output = output + ", " + type + substr;
			}
			else
			{
				output = output + ", " + type + substr + "[]";
			}
		}
		s2 = s2.substr(pos + 1);
	}
	addFunction(s1, inputType);
	return output;
}

string myparser::arrayCheck(string id, string expression)
{
	string res;
	int i;
	int a;
	string type = "";
	string digitexist;
	stringstream sin(expression);
	for (i = 0; i<top; i++)
	{
		if (tablestack[i].value == id)
		{
			type = tablestack[i].type;
			break;
		}
	}
	if (!(sin >> a))
		digitexist = "false";
	else
		digitexist = "true";
	if (type != "")
	{
		unsigned int pos;
		pos = type.find("]", 0);
		arrayType = tablestack[i].type;
		if (pos != 0)
		{
			int low;
			int up;
			string num;
			int num1;
			string temp;
			string temp1;
			stringstream ss;
			stringstream ss1;
			unsigned int pos_comma;
			num = expression;
			pos_comma = type.find("|", 0);
			temp = type.substr(pos + 1, pos_comma - pos - 1);
			ss << temp;
			ss >> low;
			temp1 = type.substr(pos_comma + 1, type.length() - pos_comma);
			ss1 << temp1;
			ss1 >> up;
			ss1 << num;
			ss1 >> num1;
			if ((num1<low || num1>up) && digitexist == "true")
			{
				cout << lineno + 1 << ":";
				yyerror("overflow!");
				hasError = true;
			}
			else
			{
				res = id + "[" + expression + " - " + temp + "]";
			}
		}
	}
	if (i == top)
	{
		cout << lineno + 1 << ":";
		cout << id << " ";
		yyerror("hasn't been declared");
		hasError = true;
	}
	return res;
}

void myparser::yyerror(const char *str)
{
	cout << "Error : " << str << " at line number = " << lineno + 1 << endl;
}