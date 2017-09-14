struct symbol
{
	string name;
	struct parameters *records;
	struct ref *reflist;
	struct symbol *next;
	struct ref *nowref;
	string type;
	int lowbound;
	int upbound;
	int dimension;
};

struct ref{//函数表
	struct ref *next;
	int lineno;
};

typedef struct table
{
	struct symbol *head;
	struct symbol *now;
}*tablePtr, table;

//函数,记录变量
struct parameters
{
	struct parameTer *head;
	//string parameter;
	//string ptype;
	struct parameTer *current;
};
//参数
struct parameTer
{
	string pname;
	string type;
	parameTer * next;
};
typedef struct ftable
{
	struct	functions *head;
	struct  functions *current;
}*Func, func;

struct functions
{
	string fname;
	string feedback;
	struct parameters *Parameter;
	struct functions *next;
};

typedef struct tablenodes
{
	string value;
	string type;
}tablenode;

void addType(string name, string Type);
bool checkArray(string name, int index);
bool checkType(string name);
struct symbol *lookup(string cname);
void addref(int lineno, char* cname);
void addFunction(string pname, string pType);
string checkFunction(string fname, string paranow);
void addFname(string fname, string feedBack);
string readTransform(string input);
string CheckFunction(string FunctionNmae);

extern int lineno;
extern bool hasError;

#define PROGRAM 1
#define FUNCTION  2
#define PROCEDURE  3    
#define INTEGER  4
#define REAL  5
#define BOOLEAN  6
#define ARRAY  7
#define RECORD  8
#define VAR  9
#define BEGIN  10
#define END  11
#define OF  12
#define IF  13
#define THEN  14
#define ELSE  15
#define WHILE  16
#define DO 17
#define NOT  18
#define TRUE  19
#define FALSE  20
#define READ  21
#define WRITE  22
#define	COMMA	37		
#define	SEMICOLON 38		
#define	DEFINE	39		
#define	LEFTCUBE 40		
#define	RIGHTCUBE 41			
#define	LEFTCIRCLE	42			
#define	RIGHTCIRCLE	43
#define	BETWEEN	44
#define	PROGRAMEND 45	
#define FLOAT 46
#define INT 47
#define ID 48
#define RELOP 49
#define ADDOP 50
#define MULOP 51
#define ASSIGNOP 52
#define SYMBOL 53
#define FOR 54
#define TO 55
#define ERROR 56