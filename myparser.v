#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 6 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 06/07/15
# Time: 01:28:29
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : Program $end

    1  Program : program_head program_body PROGRAMEND

    2  program_head : PROGRAM ID LEFTCIRCLE identifier_list RIGHTCIRCLE SEMICOLON
    3               | declarations subprogram_declarations error compound_statement

    4  identifier_list : identifier_list COMMA ID
    5                  | ID

    6  program_body : declarations subprogram_declarations compound_statement

    7  declarations : VAR declaration SEMICOLON
    8               |

    9  declaration : declaration SEMICOLON identifier_list DEFINE type
   10              | declaration error SEMICOLON identifier_list DEFINE type
   11              | identifier_list DEFINE type

   12  type : standard_type
   13       | ARRAY LEFTCUBE DIGITS PROGRAMEND PROGRAMEND DIGITS RIGHTCUBE OF standard_type
   14       | RECORD declaration END

   15  standard_type : INTEGER
   16                | REAL
   17                | BOOLEAN

   18  subprogram_declarations : error subprogram_declaration
   19                          | subprogram_declarations subprogram_declaration SEMICOLON
   20                          |

   21  subprogram_declaration : subprogram_head declarations compound_statement
   22                         | subprogram_head error declarations compound_statement
   23                         | subprogram_head declarations error compound_statement

   24  $$1 :

   25  subprogram_head : FUNCTION ID $$1 arguments DEFINE standard_type SEMICOLON

   26  $$2 :

   27  subprogram_head : PROCEDURE ID $$2 arguments SEMICOLON

   28  arguments : LEFTCIRCLE parameter_lists RIGHTCIRCLE
   29            |

   30  parameter_lists : parameter_lists SEMICOLON parameter_list
   31                  | parameter_list
   32                  | error parameter_list

   33  parameter_list : VAR identifier_list DEFINE type
   34                 | identifier_list DEFINE type

   35  compound_statement : BEGIN optional_statements END
   36                     | BEGIN optional_statements error END

   37  optional_statements : statement_list
   38                      |

   39  statement_list : statement_list SEMICOLON statement
   40                 | statement

   41  statement : error SEMICOLON
   42            | variable ASSIGNOP error SEMICOLON
   43            | IF error THEN statement
   44            | IF expression error statement
   45            | IF expression THEN error ELSE statement
   46            | WHILE error DO statement
   47            | WHILE expression error statement
   48            | FOR error DO statement
   49            | FOR range error statement
   50            | variable ASSIGNOP expression
   51            | procedure_call_statement
   52            | compound_statement
   53            | IF expression THEN statement
   54            | IF expression THEN statement ELSE statement

   55  $$3 :

   56  statement : WHILE expression $$3 DO statement
   57            | FOR range DO statement
   58            | READ LEFTCIRCLE identifier_list RIGHTCIRCLE
   59            | WRITE LEFTCIRCLE expr_list RIGHTCIRCLE

   60  range : ID ASSIGNOP limit TO limit

   61  limit : ID
   62        | DIGITS
   63        | ID LEFTCIRCLE expr_list RIGHTCIRCLE
   64        | ID LEFTCUBE expression RIGHTCUBE

   65  variable : ID
   66           | ID LEFTCUBE expression RIGHTCUBE

   67  procedure_call_statement : ID
   68                           | ID LEFTCIRCLE expr_list RIGHTCIRCLE

   69  expr_list : expr_list COMMA expression
   70            | expression

   71  expression : simple_expr RELOP simple_expr
   72             | simple_expr

   73  simple_expr : simple_expr ADDOP term
   74              | term
   75              | sign term

   76  term : term MULOP factor
   77       | factor

   78  factor : ID
   79         | ID LEFTCIRCLE expr_list RIGHTCIRCLE
   80         | ID LEFTCUBE expression RIGHTCUBE
   81         | DIGITS
   82         | NUM
   83         | LEFTCIRCLE expression RIGHTCIRCLE
   84         | NOT factor
   85         | TRUE
   86         | FALSE

   87  sign : ADDOP


##############################################################################
# States
##############################################################################

state 0
	$accept : . Program $end
	declarations : .  (8)

	PROGRAM  shift 1
	VAR  shift 2
	.  reduce 8

	Program  goto 3
	declarations  goto 4
	program_head  goto 5


state 1
	program_head : PROGRAM . ID LEFTCIRCLE identifier_list RIGHTCIRCLE SEMICOLON

	ID  shift 6


state 2
	declarations : VAR . declaration SEMICOLON

	ID  shift 7

	identifier_list  goto 8
	declaration  goto 9


state 3
	$accept : Program . $end  (0)

	$end  accept


4: shift-reduce conflict (shift 10, reduce 20) on error
state 4
	program_head : declarations . subprogram_declarations error compound_statement
	subprogram_declarations : .  (20)

	error  shift 10
	.  reduce 20

	subprogram_declarations  goto 11


state 5
	Program : program_head . program_body PROGRAMEND
	declarations : .  (8)

	VAR  shift 2
	.  reduce 8

	declarations  goto 12
	program_body  goto 13


state 6
	program_head : PROGRAM ID . LEFTCIRCLE identifier_list RIGHTCIRCLE SEMICOLON

	LEFTCIRCLE  shift 14


state 7
	identifier_list : ID .  (5)

	.  reduce 5


state 8
	declaration : identifier_list . DEFINE type
	identifier_list : identifier_list . COMMA ID

	COMMA  shift 15
	DEFINE  shift 16


state 9
	declarations : VAR declaration . SEMICOLON
	declaration : declaration . SEMICOLON identifier_list DEFINE type
	declaration : declaration . error SEMICOLON identifier_list DEFINE type

	SEMICOLON  shift 17
	error  shift 18


state 10
	subprogram_declarations : error . subprogram_declaration

	FUNCTION  shift 19
	PROCEDURE  shift 20

	subprogram_head  goto 21
	subprogram_declaration  goto 22


state 11
	subprogram_declarations : subprogram_declarations . subprogram_declaration SEMICOLON
	program_head : declarations subprogram_declarations . error compound_statement

	FUNCTION  shift 19
	PROCEDURE  shift 20
	error  shift 23

	subprogram_head  goto 21
	subprogram_declaration  goto 24


state 12
	program_body : declarations . subprogram_declarations compound_statement
	subprogram_declarations : .  (20)

	error  shift 10
	.  reduce 20

	subprogram_declarations  goto 25


state 13
	Program : program_head program_body . PROGRAMEND

	PROGRAMEND  shift 26


state 14
	program_head : PROGRAM ID LEFTCIRCLE . identifier_list RIGHTCIRCLE SEMICOLON

	ID  shift 7

	identifier_list  goto 27


state 15
	identifier_list : identifier_list COMMA . ID

	ID  shift 28


state 16
	declaration : identifier_list DEFINE . type

	INTEGER  shift 29
	REAL  shift 30
	BOOLEAN  shift 31
	ARRAY  shift 32
	RECORD  shift 33

	standard_type  goto 34
	type  goto 35


state 17
	declarations : VAR declaration SEMICOLON .  (7)
	declaration : declaration SEMICOLON . identifier_list DEFINE type

	ID  shift 7
	.  reduce 7

	identifier_list  goto 36


state 18
	declaration : declaration error . SEMICOLON identifier_list DEFINE type

	SEMICOLON  shift 37


state 19
	subprogram_head : FUNCTION . ID $$1 arguments DEFINE standard_type SEMICOLON

	ID  shift 38


state 20
	subprogram_head : PROCEDURE . ID $$2 arguments SEMICOLON

	ID  shift 39


21: shift-reduce conflict (shift 40, reduce 8) on error
state 21
	subprogram_declaration : subprogram_head . declarations compound_statement
	subprogram_declaration : subprogram_head . declarations error compound_statement
	subprogram_declaration : subprogram_head . error declarations compound_statement
	declarations : .  (8)

	VAR  shift 2
	error  shift 40
	.  reduce 8

	declarations  goto 41


state 22
	subprogram_declarations : error subprogram_declaration .  (18)

	.  reduce 18


state 23
	program_head : declarations subprogram_declarations error . compound_statement

	BEGIN  shift 42

	compound_statement  goto 43


state 24
	subprogram_declarations : subprogram_declarations subprogram_declaration . SEMICOLON

	SEMICOLON  shift 44


state 25
	subprogram_declarations : subprogram_declarations . subprogram_declaration SEMICOLON
	program_body : declarations subprogram_declarations . compound_statement

	FUNCTION  shift 19
	PROCEDURE  shift 20
	BEGIN  shift 42

	compound_statement  goto 45
	subprogram_head  goto 21
	subprogram_declaration  goto 24


state 26
	Program : program_head program_body PROGRAMEND .  (1)

	.  reduce 1


state 27
	program_head : PROGRAM ID LEFTCIRCLE identifier_list . RIGHTCIRCLE SEMICOLON
	identifier_list : identifier_list . COMMA ID

	COMMA  shift 15
	RIGHTCIRCLE  shift 46


state 28
	identifier_list : identifier_list COMMA ID .  (4)

	.  reduce 4


state 29
	standard_type : INTEGER .  (15)

	.  reduce 15


state 30
	standard_type : REAL .  (16)

	.  reduce 16


state 31
	standard_type : BOOLEAN .  (17)

	.  reduce 17


state 32
	type : ARRAY . LEFTCUBE DIGITS PROGRAMEND PROGRAMEND DIGITS RIGHTCUBE OF standard_type

	LEFTCUBE  shift 47


state 33
	type : RECORD . declaration END

	ID  shift 7

	identifier_list  goto 8
	declaration  goto 48


state 34
	type : standard_type .  (12)

	.  reduce 12


state 35
	declaration : identifier_list DEFINE type .  (11)

	.  reduce 11


state 36
	declaration : declaration SEMICOLON identifier_list . DEFINE type
	identifier_list : identifier_list . COMMA ID

	COMMA  shift 15
	DEFINE  shift 49


state 37
	declaration : declaration error SEMICOLON . identifier_list DEFINE type

	ID  shift 7

	identifier_list  goto 50


state 38
	subprogram_head : FUNCTION ID . $$1 arguments DEFINE standard_type SEMICOLON
	$$1 : .  (24)

	.  reduce 24

	$$1  goto 51


state 39
	subprogram_head : PROCEDURE ID . $$2 arguments SEMICOLON
	$$2 : .  (26)

	.  reduce 26

	$$2  goto 52


state 40
	subprogram_declaration : subprogram_head error . declarations compound_statement
	declarations : .  (8)

	VAR  shift 2
	.  reduce 8

	declarations  goto 53


state 41
	subprogram_declaration : subprogram_head declarations . compound_statement
	subprogram_declaration : subprogram_head declarations . error compound_statement

	BEGIN  shift 42
	error  shift 54

	compound_statement  goto 55


42: shift-reduce conflict (shift 62, reduce 38) on error
state 42
	compound_statement : BEGIN . optional_statements END
	compound_statement : BEGIN . optional_statements error END
	optional_statements : .  (38)

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62
	.  reduce 38

	statement  goto 63
	statement_list  goto 64
	optional_statements  goto 65
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 43
	program_head : declarations subprogram_declarations error compound_statement .  (3)

	.  reduce 3


state 44
	subprogram_declarations : subprogram_declarations subprogram_declaration SEMICOLON .  (19)

	.  reduce 19


state 45
	program_body : declarations subprogram_declarations compound_statement .  (6)

	.  reduce 6


state 46
	program_head : PROGRAM ID LEFTCIRCLE identifier_list RIGHTCIRCLE . SEMICOLON

	SEMICOLON  shift 69


state 47
	type : ARRAY LEFTCUBE . DIGITS PROGRAMEND PROGRAMEND DIGITS RIGHTCUBE OF standard_type

	DIGITS  shift 70


state 48
	declaration : declaration . SEMICOLON identifier_list DEFINE type
	declaration : declaration . error SEMICOLON identifier_list DEFINE type
	type : RECORD declaration . END

	END  shift 71
	SEMICOLON  shift 72
	error  shift 18


state 49
	declaration : declaration SEMICOLON identifier_list DEFINE . type

	INTEGER  shift 29
	REAL  shift 30
	BOOLEAN  shift 31
	ARRAY  shift 32
	RECORD  shift 33

	standard_type  goto 34
	type  goto 73


state 50
	declaration : declaration error SEMICOLON identifier_list . DEFINE type
	identifier_list : identifier_list . COMMA ID

	COMMA  shift 15
	DEFINE  shift 74


state 51
	subprogram_head : FUNCTION ID $$1 . arguments DEFINE standard_type SEMICOLON
	arguments : .  (29)

	LEFTCIRCLE  shift 75
	.  reduce 29

	arguments  goto 76


state 52
	subprogram_head : PROCEDURE ID $$2 . arguments SEMICOLON
	arguments : .  (29)

	LEFTCIRCLE  shift 75
	.  reduce 29

	arguments  goto 77


state 53
	subprogram_declaration : subprogram_head error declarations . compound_statement

	BEGIN  shift 42

	compound_statement  goto 78


state 54
	subprogram_declaration : subprogram_head declarations error . compound_statement

	BEGIN  shift 42

	compound_statement  goto 79


state 55
	subprogram_declaration : subprogram_head declarations compound_statement .  (21)

	.  reduce 21


state 56
	statement : IF . expression error statement
	statement : IF . expression THEN statement ELSE statement
	statement : IF . expression THEN error ELSE statement
	statement : IF . expression THEN statement
	statement : IF . error THEN statement

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87
	error  shift 88

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expression  goto 93


state 57
	statement : WHILE . expression $$3 DO statement
	statement : WHILE . error DO statement
	statement : WHILE . expression error statement

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87
	error  shift 94

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expression  goto 95


state 58
	statement : READ . LEFTCIRCLE identifier_list RIGHTCIRCLE

	LEFTCIRCLE  shift 96


state 59
	statement : WRITE . LEFTCIRCLE expr_list RIGHTCIRCLE

	LEFTCIRCLE  shift 97


state 60
	variable : ID .  (65)
	variable : ID . LEFTCUBE expression RIGHTCUBE
	procedure_call_statement : ID .  (67)
	procedure_call_statement : ID . LEFTCIRCLE expr_list RIGHTCIRCLE

	LEFTCUBE  shift 98
	LEFTCIRCLE  shift 99
	ASSIGNOP  reduce 65
	.  reduce 67


state 61
	statement : FOR . range DO statement
	statement : FOR . range error statement
	statement : FOR . error DO statement

	ID  shift 100
	error  shift 101

	range  goto 102


state 62
	statement : error . SEMICOLON

	SEMICOLON  shift 103


state 63
	statement_list : statement .  (40)

	.  reduce 40


state 64
	statement_list : statement_list . SEMICOLON statement
	optional_statements : statement_list .  (37)

	SEMICOLON  shift 104
	.  reduce 37


state 65
	compound_statement : BEGIN optional_statements . END
	compound_statement : BEGIN optional_statements . error END

	END  shift 105
	error  shift 106


state 66
	statement : procedure_call_statement .  (51)

	.  reduce 51


state 67
	statement : variable . ASSIGNOP expression
	statement : variable . ASSIGNOP error SEMICOLON

	ASSIGNOP  shift 107


state 68
	statement : compound_statement .  (52)

	.  reduce 52


state 69
	program_head : PROGRAM ID LEFTCIRCLE identifier_list RIGHTCIRCLE SEMICOLON .  (2)

	.  reduce 2


state 70
	type : ARRAY LEFTCUBE DIGITS . PROGRAMEND PROGRAMEND DIGITS RIGHTCUBE OF standard_type

	PROGRAMEND  shift 108


state 71
	type : RECORD declaration END .  (14)

	.  reduce 14


state 72
	declaration : declaration SEMICOLON . identifier_list DEFINE type

	ID  shift 7

	identifier_list  goto 36


state 73
	declaration : declaration SEMICOLON identifier_list DEFINE type .  (9)

	.  reduce 9


state 74
	declaration : declaration error SEMICOLON identifier_list DEFINE . type

	INTEGER  shift 29
	REAL  shift 30
	BOOLEAN  shift 31
	ARRAY  shift 32
	RECORD  shift 33

	standard_type  goto 34
	type  goto 109


state 75
	arguments : LEFTCIRCLE . parameter_lists RIGHTCIRCLE

	VAR  shift 110
	ID  shift 7
	error  shift 111

	parameter_list  goto 112
	identifier_list  goto 113
	parameter_lists  goto 114


state 76
	subprogram_head : FUNCTION ID $$1 arguments . DEFINE standard_type SEMICOLON

	DEFINE  shift 115


state 77
	subprogram_head : PROCEDURE ID $$2 arguments . SEMICOLON

	SEMICOLON  shift 116


state 78
	subprogram_declaration : subprogram_head error declarations compound_statement .  (22)

	.  reduce 22


state 79
	subprogram_declaration : subprogram_head declarations error compound_statement .  (23)

	.  reduce 23


state 80
	factor : NOT . factor

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86

	factor  goto 117


state 81
	factor : TRUE .  (85)

	.  reduce 85


state 82
	factor : FALSE .  (86)

	.  reduce 86


state 83
	factor : LEFTCIRCLE . expression RIGHTCIRCLE

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expression  goto 118


state 84
	factor : NUM .  (82)

	.  reduce 82


state 85
	factor : DIGITS .  (81)

	.  reduce 81


state 86
	factor : ID .  (78)
	factor : ID . LEFTCUBE expression RIGHTCUBE
	factor : ID . LEFTCIRCLE expr_list RIGHTCIRCLE

	LEFTCUBE  shift 119
	LEFTCIRCLE  shift 120
	.  reduce 78


state 87
	sign : ADDOP .  (87)

	.  reduce 87


state 88
	statement : IF error . THEN statement

	THEN  shift 121


state 89
	simple_expr : sign . term

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86

	factor  goto 90
	term  goto 122


state 90
	term : factor .  (77)

	.  reduce 77


state 91
	term : term . MULOP factor
	simple_expr : term .  (74)

	MULOP  shift 123
	.  reduce 74


state 92
	simple_expr : simple_expr . ADDOP term
	expression : simple_expr . RELOP simple_expr
	expression : simple_expr .  (72)

	RELOP  shift 124
	ADDOP  shift 125
	.  reduce 72


state 93
	statement : IF expression . error statement
	statement : IF expression . THEN statement ELSE statement
	statement : IF expression . THEN error ELSE statement
	statement : IF expression . THEN statement

	THEN  shift 126
	error  shift 127


state 94
	statement : WHILE error . DO statement

	DO  shift 128


state 95
	statement : WHILE expression . $$3 DO statement
	statement : WHILE expression . error statement
	$$3 : .  (55)

	error  shift 129
	.  reduce 55

	$$3  goto 130


state 96
	statement : READ LEFTCIRCLE . identifier_list RIGHTCIRCLE

	ID  shift 7

	identifier_list  goto 131


state 97
	statement : WRITE LEFTCIRCLE . expr_list RIGHTCIRCLE

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expr_list  goto 132
	expression  goto 133


state 98
	variable : ID LEFTCUBE . expression RIGHTCUBE

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expression  goto 134


state 99
	procedure_call_statement : ID LEFTCIRCLE . expr_list RIGHTCIRCLE

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expr_list  goto 135
	expression  goto 133


state 100
	range : ID . ASSIGNOP limit TO limit

	ASSIGNOP  shift 136


state 101
	statement : FOR error . DO statement

	DO  shift 137


state 102
	statement : FOR range . DO statement
	statement : FOR range . error statement

	DO  shift 138
	error  shift 139


state 103
	statement : error SEMICOLON .  (41)

	.  reduce 41


state 104
	statement_list : statement_list SEMICOLON . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 140
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 105
	compound_statement : BEGIN optional_statements END .  (35)

	.  reduce 35


state 106
	compound_statement : BEGIN optional_statements error . END

	END  shift 141


state 107
	statement : variable ASSIGNOP . expression
	statement : variable ASSIGNOP . error SEMICOLON

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87
	error  shift 142

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expression  goto 143


state 108
	type : ARRAY LEFTCUBE DIGITS PROGRAMEND . PROGRAMEND DIGITS RIGHTCUBE OF standard_type

	PROGRAMEND  shift 144


state 109
	declaration : declaration error SEMICOLON identifier_list DEFINE type .  (10)

	.  reduce 10


state 110
	parameter_list : VAR . identifier_list DEFINE type

	ID  shift 7

	identifier_list  goto 145


state 111
	parameter_lists : error . parameter_list

	VAR  shift 110
	ID  shift 7

	parameter_list  goto 146
	identifier_list  goto 113


state 112
	parameter_lists : parameter_list .  (31)

	.  reduce 31


state 113
	parameter_list : identifier_list . DEFINE type
	identifier_list : identifier_list . COMMA ID

	COMMA  shift 15
	DEFINE  shift 147


state 114
	arguments : LEFTCIRCLE parameter_lists . RIGHTCIRCLE
	parameter_lists : parameter_lists . SEMICOLON parameter_list

	SEMICOLON  shift 148
	RIGHTCIRCLE  shift 149


state 115
	subprogram_head : FUNCTION ID $$1 arguments DEFINE . standard_type SEMICOLON

	INTEGER  shift 29
	REAL  shift 30
	BOOLEAN  shift 31

	standard_type  goto 150


state 116
	subprogram_head : PROCEDURE ID $$2 arguments SEMICOLON .  (27)

	.  reduce 27


state 117
	factor : NOT factor .  (84)

	.  reduce 84


state 118
	factor : LEFTCIRCLE expression . RIGHTCIRCLE

	RIGHTCIRCLE  shift 151


state 119
	factor : ID LEFTCUBE . expression RIGHTCUBE

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expression  goto 152


state 120
	factor : ID LEFTCIRCLE . expr_list RIGHTCIRCLE

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expr_list  goto 153
	expression  goto 133


state 121
	statement : IF error THEN . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 154
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 122
	term : term . MULOP factor
	simple_expr : sign term .  (75)

	MULOP  shift 123
	.  reduce 75


state 123
	term : term MULOP . factor

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86

	factor  goto 155


state 124
	expression : simple_expr RELOP . simple_expr

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 156


state 125
	simple_expr : simple_expr ADDOP . term

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86

	factor  goto 90
	term  goto 157


state 126
	statement : IF expression THEN . statement ELSE statement
	statement : IF expression THEN . error ELSE statement
	statement : IF expression THEN . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 158

	statement  goto 159
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 127
	statement : IF expression error . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 160
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 128
	statement : WHILE error DO . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 161
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 129
	statement : WHILE expression error . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 162
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 130
	statement : WHILE expression $$3 . DO statement

	DO  shift 163


state 131
	statement : READ LEFTCIRCLE identifier_list . RIGHTCIRCLE
	identifier_list : identifier_list . COMMA ID

	COMMA  shift 15
	RIGHTCIRCLE  shift 164


state 132
	statement : WRITE LEFTCIRCLE expr_list . RIGHTCIRCLE
	expr_list : expr_list . COMMA expression

	COMMA  shift 165
	RIGHTCIRCLE  shift 166


state 133
	expr_list : expression .  (70)

	.  reduce 70


state 134
	variable : ID LEFTCUBE expression . RIGHTCUBE

	RIGHTCUBE  shift 167


state 135
	procedure_call_statement : ID LEFTCIRCLE expr_list . RIGHTCIRCLE
	expr_list : expr_list . COMMA expression

	COMMA  shift 165
	RIGHTCIRCLE  shift 168


state 136
	range : ID ASSIGNOP . limit TO limit

	DIGITS  shift 169
	ID  shift 170

	limit  goto 171


state 137
	statement : FOR error DO . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 172
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 138
	statement : FOR range DO . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 173
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 139
	statement : FOR range error . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 174
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 140
	statement_list : statement_list SEMICOLON statement .  (39)

	.  reduce 39


state 141
	compound_statement : BEGIN optional_statements error END .  (36)

	.  reduce 36


state 142
	statement : variable ASSIGNOP error . SEMICOLON

	SEMICOLON  shift 175


state 143
	statement : variable ASSIGNOP expression .  (50)

	.  reduce 50


state 144
	type : ARRAY LEFTCUBE DIGITS PROGRAMEND PROGRAMEND . DIGITS RIGHTCUBE OF standard_type

	DIGITS  shift 176


state 145
	parameter_list : VAR identifier_list . DEFINE type
	identifier_list : identifier_list . COMMA ID

	COMMA  shift 15
	DEFINE  shift 177


state 146
	parameter_lists : error parameter_list .  (32)

	.  reduce 32


state 147
	parameter_list : identifier_list DEFINE . type

	INTEGER  shift 29
	REAL  shift 30
	BOOLEAN  shift 31
	ARRAY  shift 32
	RECORD  shift 33

	standard_type  goto 34
	type  goto 178


state 148
	parameter_lists : parameter_lists SEMICOLON . parameter_list

	VAR  shift 110
	ID  shift 7

	parameter_list  goto 179
	identifier_list  goto 113


state 149
	arguments : LEFTCIRCLE parameter_lists RIGHTCIRCLE .  (28)

	.  reduce 28


state 150
	subprogram_head : FUNCTION ID $$1 arguments DEFINE standard_type . SEMICOLON

	SEMICOLON  shift 180


state 151
	factor : LEFTCIRCLE expression RIGHTCIRCLE .  (83)

	.  reduce 83


state 152
	factor : ID LEFTCUBE expression . RIGHTCUBE

	RIGHTCUBE  shift 181


state 153
	expr_list : expr_list . COMMA expression
	factor : ID LEFTCIRCLE expr_list . RIGHTCIRCLE

	COMMA  shift 165
	RIGHTCIRCLE  shift 182


state 154
	statement : IF error THEN statement .  (43)

	.  reduce 43


state 155
	term : term MULOP factor .  (76)

	.  reduce 76


state 156
	simple_expr : simple_expr . ADDOP term
	expression : simple_expr RELOP simple_expr .  (71)

	ADDOP  shift 125
	.  reduce 71


state 157
	term : term . MULOP factor
	simple_expr : simple_expr ADDOP term .  (73)

	MULOP  shift 123
	.  reduce 73


state 158
	statement : IF expression THEN error . ELSE statement
	statement : error . SEMICOLON

	ELSE  shift 183
	SEMICOLON  shift 103


state 159
	statement : IF expression THEN statement . ELSE statement
	statement : IF expression THEN statement .  (53)

	ELSE  shift 184
	.  reduce 53


state 160
	statement : IF expression error statement .  (44)

	.  reduce 44


state 161
	statement : WHILE error DO statement .  (46)

	.  reduce 46


state 162
	statement : WHILE expression error statement .  (47)

	.  reduce 47


state 163
	statement : WHILE expression $$3 DO . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 185
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 164
	statement : READ LEFTCIRCLE identifier_list RIGHTCIRCLE .  (58)

	.  reduce 58


state 165
	expr_list : expr_list COMMA . expression

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expression  goto 186


state 166
	statement : WRITE LEFTCIRCLE expr_list RIGHTCIRCLE .  (59)

	.  reduce 59


state 167
	variable : ID LEFTCUBE expression RIGHTCUBE .  (66)

	.  reduce 66


state 168
	procedure_call_statement : ID LEFTCIRCLE expr_list RIGHTCIRCLE .  (68)

	.  reduce 68


state 169
	limit : DIGITS .  (62)

	.  reduce 62


state 170
	limit : ID .  (61)
	limit : ID . LEFTCIRCLE expr_list RIGHTCIRCLE
	limit : ID . LEFTCUBE expression RIGHTCUBE

	LEFTCUBE  shift 187
	LEFTCIRCLE  shift 188
	.  reduce 61


state 171
	range : ID ASSIGNOP limit . TO limit

	TO  shift 189


state 172
	statement : FOR error DO statement .  (48)

	.  reduce 48


state 173
	statement : FOR range DO statement .  (57)

	.  reduce 57


state 174
	statement : FOR range error statement .  (49)

	.  reduce 49


state 175
	statement : variable ASSIGNOP error SEMICOLON .  (42)

	.  reduce 42


state 176
	type : ARRAY LEFTCUBE DIGITS PROGRAMEND PROGRAMEND DIGITS . RIGHTCUBE OF standard_type

	RIGHTCUBE  shift 190


state 177
	parameter_list : VAR identifier_list DEFINE . type

	INTEGER  shift 29
	REAL  shift 30
	BOOLEAN  shift 31
	ARRAY  shift 32
	RECORD  shift 33

	standard_type  goto 34
	type  goto 191


state 178
	parameter_list : identifier_list DEFINE type .  (34)

	.  reduce 34


state 179
	parameter_lists : parameter_lists SEMICOLON parameter_list .  (30)

	.  reduce 30


state 180
	subprogram_head : FUNCTION ID $$1 arguments DEFINE standard_type SEMICOLON .  (25)

	.  reduce 25


state 181
	factor : ID LEFTCUBE expression RIGHTCUBE .  (80)

	.  reduce 80


state 182
	factor : ID LEFTCIRCLE expr_list RIGHTCIRCLE .  (79)

	.  reduce 79


state 183
	statement : IF expression THEN error ELSE . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 192
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 184
	statement : IF expression THEN statement ELSE . statement

	BEGIN  shift 42
	IF  shift 56
	WHILE  shift 57
	READ  shift 58
	WRITE  shift 59
	ID  shift 60
	FOR  shift 61
	error  shift 62

	statement  goto 193
	procedure_call_statement  goto 66
	variable  goto 67
	compound_statement  goto 68


state 185
	statement : WHILE expression $$3 DO statement .  (56)

	.  reduce 56


state 186
	expr_list : expr_list COMMA expression .  (69)

	.  reduce 69


state 187
	limit : ID LEFTCUBE . expression RIGHTCUBE

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expression  goto 194


state 188
	limit : ID LEFTCIRCLE . expr_list RIGHTCIRCLE

	NOT  shift 80
	TRUE  shift 81
	FALSE  shift 82
	LEFTCIRCLE  shift 83
	NUM  shift 84
	DIGITS  shift 85
	ID  shift 86
	ADDOP  shift 87

	sign  goto 89
	factor  goto 90
	term  goto 91
	simple_expr  goto 92
	expr_list  goto 195
	expression  goto 133


state 189
	range : ID ASSIGNOP limit TO . limit

	DIGITS  shift 169
	ID  shift 170

	limit  goto 196


state 190
	type : ARRAY LEFTCUBE DIGITS PROGRAMEND PROGRAMEND DIGITS RIGHTCUBE . OF standard_type

	OF  shift 197


state 191
	parameter_list : VAR identifier_list DEFINE type .  (33)

	.  reduce 33


state 192
	statement : IF expression THEN error ELSE statement .  (45)

	.  reduce 45


state 193
	statement : IF expression THEN statement ELSE statement .  (54)

	.  reduce 54


state 194
	limit : ID LEFTCUBE expression . RIGHTCUBE

	RIGHTCUBE  shift 198


state 195
	limit : ID LEFTCIRCLE expr_list . RIGHTCIRCLE
	expr_list : expr_list . COMMA expression

	COMMA  shift 165
	RIGHTCIRCLE  shift 199


state 196
	range : ID ASSIGNOP limit TO limit .  (60)

	.  reduce 60


state 197
	type : ARRAY LEFTCUBE DIGITS PROGRAMEND PROGRAMEND DIGITS RIGHTCUBE OF . standard_type

	INTEGER  shift 29
	REAL  shift 30
	BOOLEAN  shift 31

	standard_type  goto 200


state 198
	limit : ID LEFTCUBE expression RIGHTCUBE .  (64)

	.  reduce 64


state 199
	limit : ID LEFTCIRCLE expr_list RIGHTCIRCLE .  (63)

	.  reduce 63


state 200
	type : ARRAY LEFTCUBE DIGITS PROGRAMEND PROGRAMEND DIGITS RIGHTCUBE OF standard_type .  (13)

	.  reduce 13


##############################################################################
# Summary
##############################################################################

State 4 contains 1 shift-reduce conflict(s)
State 21 contains 1 shift-reduce conflict(s)
State 42 contains 1 shift-reduce conflict(s)


42 token(s), 32 nonterminal(s)
88 grammar rule(s), 201 state(s)


##############################################################################
# End of File
##############################################################################
