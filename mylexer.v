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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 06/07/15
# Time: 01:28:29
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [bB][eE][gG][iI][nN]

    2  [pP][rR][oO][gG][rR][aA][mM]

    3  [vV][aA][rR]

    4  [aA][rR][rR][aA][yY]

    5  [rR][eE][cC][oO][rR][dD]

    6  [eE][nN][dD]

    7  [oO][fF]

    8  [iI][nN][tT][eE][gG][eE][rR]

    9  [rR][eE][aA][lL]

   10  [bB][oO][oO][lL][eE][aA][nN]

   11  [fF][uU][nN][cC][tT][iI][oO][nN]

   12  [pP][rR][oO][cC][eE][dD][uU][rR][eE]

   13  [iI][fF]

   14  [tT][hH][eE][nN]

   15  [eE][lL][sS][eE]

   16  [wW][hH][iI][lL][eE]

   17  [dD][oO]

   18  [rR][eE][aA][dD]

   19  [wW][rR][iI][tT][eE]

   20  [nN][oO][tT]

   21  [tT][rR][uU][eE]

   22  [fF][aA][lL][sS][eE]

   23  [fF][oO][rR]

   24  [tT][oO]

   25  "="

   26  "<>"

   27  "<"

   28  ">"

   29  "<="

   30  ">="

   31  "+"

   32  "-"

   33  or

   34  "*"

   35  "/"

   36  mod

   37  and

   38  ":="

   39  ","

   40  ";"

   41  ":"

   42  "["

   43  "]"

   44  "("

   45  ")"

   46  "."

   47  [A-Za-z]([A-Za-z]|[0-9])*

   48  [0-9]+

   49  [0-9]+(\.[0-9]+)?(E[+\-]?[0-9]+)?

   50  [\t]+

   51  [\n]

   52  "{"

   53  "//"

   54  " "

   55  "\r"

   56  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 5
	0x0b - 0x0c (2)    goto 3
	0x0d               goto 6
	0x0e - 0x1f (18)   goto 3
	0x20               goto 7
	0x21 - 0x27 (7)    goto 3
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2e               goto 14
	0x2f               goto 15
	0x30 - 0x39 (10)   goto 16
	0x3a               goto 17
	0x3b               goto 18
	0x3c               goto 19
	0x3d               goto 20
	0x3e               goto 21
	0x3f - 0x40 (2)    goto 3
	0x41               goto 22
	0x42               goto 23
	0x43               goto 24
	0x44               goto 25
	0x45               goto 26
	0x46               goto 27
	0x47 - 0x48 (2)    goto 24
	0x49               goto 28
	0x4a - 0x4d (4)    goto 24
	0x4e               goto 29
	0x4f               goto 30
	0x50               goto 31
	0x51               goto 24
	0x52               goto 32
	0x53               goto 24
	0x54               goto 33
	0x55               goto 24
	0x56               goto 34
	0x57               goto 35
	0x58 - 0x5a (3)    goto 24
	0x5b               goto 36
	0x5c               goto 3
	0x5d               goto 37
	0x5e - 0x60 (3)    goto 3
	0x61               goto 38
	0x62               goto 23
	0x63               goto 24
	0x64               goto 25
	0x65               goto 26
	0x66               goto 27
	0x67 - 0x68 (2)    goto 24
	0x69               goto 28
	0x6a - 0x6c (3)    goto 24
	0x6d               goto 39
	0x6e               goto 29
	0x6f               goto 40
	0x70               goto 31
	0x71               goto 24
	0x72               goto 32
	0x73               goto 24
	0x74               goto 33
	0x75               goto 24
	0x76               goto 34
	0x77               goto 35
	0x78 - 0x7a (3)    goto 24
	0x7b               goto 41
	0x7c - 0xff (132)  goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 5
	0x0b - 0x0c (2)    goto 3
	0x0d               goto 6
	0x0e - 0x1f (18)   goto 3
	0x20               goto 7
	0x21 - 0x27 (7)    goto 3
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2e               goto 14
	0x2f               goto 15
	0x30 - 0x39 (10)   goto 16
	0x3a               goto 17
	0x3b               goto 18
	0x3c               goto 19
	0x3d               goto 20
	0x3e               goto 21
	0x3f - 0x40 (2)    goto 3
	0x41               goto 22
	0x42               goto 23
	0x43               goto 24
	0x44               goto 25
	0x45               goto 26
	0x46               goto 27
	0x47 - 0x48 (2)    goto 24
	0x49               goto 28
	0x4a - 0x4d (4)    goto 24
	0x4e               goto 29
	0x4f               goto 30
	0x50               goto 31
	0x51               goto 24
	0x52               goto 32
	0x53               goto 24
	0x54               goto 33
	0x55               goto 24
	0x56               goto 34
	0x57               goto 35
	0x58 - 0x5a (3)    goto 24
	0x5b               goto 36
	0x5c               goto 3
	0x5d               goto 37
	0x5e - 0x60 (3)    goto 3
	0x61               goto 38
	0x62               goto 23
	0x63               goto 24
	0x64               goto 25
	0x65               goto 26
	0x66               goto 27
	0x67 - 0x68 (2)    goto 24
	0x69               goto 28
	0x6a - 0x6c (3)    goto 24
	0x6d               goto 39
	0x6e               goto 29
	0x6f               goto 40
	0x70               goto 31
	0x71               goto 24
	0x72               goto 32
	0x73               goto 24
	0x74               goto 33
	0x75               goto 24
	0x76               goto 34
	0x77               goto 35
	0x78 - 0x7a (3)    goto 24
	0x7b               goto 41
	0x7c - 0xff (132)  goto 3


state 3
	match 56


state 4
	0x09               goto 4

	match 50


state 5
	match 51


state 6
	match 55


state 7
	match 54


state 8
	match 44


state 9
	match 45


state 10
	match 34


state 11
	match 31


state 12
	match 39


state 13
	match 32


state 14
	match 46


state 15
	0x2f               goto 42

	match 35


state 16
	0x2e               goto 43
	0x30 - 0x39 (10)   goto 16
	0x45               goto 44

	match 48


state 17
	0x3d               goto 45

	match 41


state 18
	match 40


state 19
	0x3d               goto 46
	0x3e               goto 47

	match 27


state 20
	match 25


state 21
	0x3d               goto 48

	match 28


state 22
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 49
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 49
	0x73 - 0x7a (8)    goto 24

	match 47


state 23
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 50
	0x46 - 0x4e (9)    goto 24
	0x4f               goto 51
	0x50 - 0x5a (11)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 50
	0x66 - 0x6e (9)    goto 24
	0x6f               goto 51
	0x70 - 0x7a (11)   goto 24

	match 47


state 24
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 47


state 25
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4e (14)   goto 24
	0x4f               goto 52
	0x50 - 0x5a (11)   goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 52
	0x70 - 0x7a (11)   goto 24

	match 47


state 26
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4b (11)   goto 24
	0x4c               goto 53
	0x4d               goto 24
	0x4e               goto 54
	0x4f - 0x5a (12)   goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 53
	0x6d               goto 24
	0x6e               goto 54
	0x6f - 0x7a (12)   goto 24

	match 47


state 27
	0x30 - 0x39 (10)   goto 24
	0x41               goto 55
	0x42 - 0x4e (13)   goto 24
	0x4f               goto 56
	0x50 - 0x54 (5)    goto 24
	0x55               goto 57
	0x56 - 0x5a (5)    goto 24
	0x61               goto 55
	0x62 - 0x6e (13)   goto 24
	0x6f               goto 56
	0x70 - 0x74 (5)    goto 24
	0x75               goto 57
	0x76 - 0x7a (5)    goto 24

	match 47


state 28
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x45 (5)    goto 24
	0x46               goto 58
	0x47 - 0x4d (7)    goto 24
	0x4e               goto 59
	0x4f - 0x5a (12)   goto 24
	0x61 - 0x65 (5)    goto 24
	0x66               goto 58
	0x67 - 0x6d (7)    goto 24
	0x6e               goto 59
	0x6f - 0x7a (12)   goto 24

	match 47


state 29
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4e (14)   goto 24
	0x4f               goto 60
	0x50 - 0x5a (11)   goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 60
	0x70 - 0x7a (11)   goto 24

	match 47


state 30
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x45 (5)    goto 24
	0x46               goto 61
	0x47 - 0x5a (20)   goto 24
	0x61 - 0x65 (5)    goto 24
	0x66               goto 61
	0x67 - 0x7a (20)   goto 24

	match 47


state 31
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 62
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 62
	0x73 - 0x7a (8)    goto 24

	match 47


state 32
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 63
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 63
	0x66 - 0x7a (21)   goto 24

	match 47


state 33
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x47 (7)    goto 24
	0x48               goto 64
	0x49 - 0x4e (6)    goto 24
	0x4f               goto 65
	0x50 - 0x51 (2)    goto 24
	0x52               goto 66
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x67 (7)    goto 24
	0x68               goto 64
	0x69 - 0x6e (6)    goto 24
	0x6f               goto 65
	0x70 - 0x71 (2)    goto 24
	0x72               goto 66
	0x73 - 0x7a (8)    goto 24

	match 47


state 34
	0x30 - 0x39 (10)   goto 24
	0x41               goto 67
	0x42 - 0x5a (25)   goto 24
	0x61               goto 67
	0x62 - 0x7a (25)   goto 24

	match 47


state 35
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x47 (7)    goto 24
	0x48               goto 68
	0x49 - 0x51 (9)    goto 24
	0x52               goto 69
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x67 (7)    goto 24
	0x68               goto 68
	0x69 - 0x71 (9)    goto 24
	0x72               goto 69
	0x73 - 0x7a (8)    goto 24

	match 47


state 36
	match 42


state 37
	match 43


state 38
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 49
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 70
	0x6f - 0x71 (3)    goto 24
	0x72               goto 49
	0x73 - 0x7a (8)    goto 24

	match 47


state 39
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 71
	0x70 - 0x7a (11)   goto 24

	match 47


state 40
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x45 (5)    goto 24
	0x46               goto 61
	0x47 - 0x5a (20)   goto 24
	0x61 - 0x65 (5)    goto 24
	0x66               goto 61
	0x67 - 0x71 (11)   goto 24
	0x72               goto 72
	0x73 - 0x7a (8)    goto 24

	match 47


state 41
	match 52


state 42
	match 53


state 43
	0x30 - 0x39 (10)   goto 73


state 44
	0x2b               goto 74
	0x2d               goto 74
	0x30 - 0x39 (10)   goto 75


state 45
	match 38


state 46
	match 29


state 47
	match 26


state 48
	match 30


state 49
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 76
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 76
	0x73 - 0x7a (8)    goto 24

	match 47


state 50
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x46 (6)    goto 24
	0x47               goto 77
	0x48 - 0x5a (19)   goto 24
	0x61 - 0x66 (6)    goto 24
	0x67               goto 77
	0x68 - 0x7a (19)   goto 24

	match 47


state 51
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4e (14)   goto 24
	0x4f               goto 78
	0x50 - 0x5a (11)   goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 78
	0x70 - 0x7a (11)   goto 24

	match 47


state 52
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 17


state 53
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x52 (18)   goto 24
	0x53               goto 79
	0x54 - 0x5a (7)    goto 24
	0x61 - 0x72 (18)   goto 24
	0x73               goto 79
	0x74 - 0x7a (7)    goto 24

	match 47


state 54
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x43 (3)    goto 24
	0x44               goto 80
	0x45 - 0x5a (22)   goto 24
	0x61 - 0x63 (3)    goto 24
	0x64               goto 80
	0x65 - 0x7a (22)   goto 24

	match 47


state 55
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4b (11)   goto 24
	0x4c               goto 81
	0x4d - 0x5a (14)   goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 81
	0x6d - 0x7a (14)   goto 24

	match 47


state 56
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 82
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 82
	0x73 - 0x7a (8)    goto 24

	match 47


state 57
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4d (13)   goto 24
	0x4e               goto 83
	0x4f - 0x5a (12)   goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 83
	0x6f - 0x7a (12)   goto 24

	match 47


state 58
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 13


state 59
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x53 (19)   goto 24
	0x54               goto 84
	0x55 - 0x5a (6)    goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 84
	0x75 - 0x7a (6)    goto 24

	match 47


state 60
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x53 (19)   goto 24
	0x54               goto 85
	0x55 - 0x5a (6)    goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 85
	0x75 - 0x7a (6)    goto 24

	match 47


state 61
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 7


state 62
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4e (14)   goto 24
	0x4f               goto 86
	0x50 - 0x5a (11)   goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 86
	0x70 - 0x7a (11)   goto 24

	match 47


state 63
	0x30 - 0x39 (10)   goto 24
	0x41               goto 87
	0x42               goto 24
	0x43               goto 88
	0x44 - 0x5a (23)   goto 24
	0x61               goto 87
	0x62               goto 24
	0x63               goto 88
	0x64 - 0x7a (23)   goto 24

	match 47


state 64
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 89
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 89
	0x66 - 0x7a (21)   goto 24

	match 47


state 65
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 24


state 66
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x54 (20)   goto 24
	0x55               goto 90
	0x56 - 0x5a (5)    goto 24
	0x61 - 0x74 (20)   goto 24
	0x75               goto 90
	0x76 - 0x7a (5)    goto 24

	match 47


state 67
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 91
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 91
	0x73 - 0x7a (8)    goto 24

	match 47


state 68
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x48 (8)    goto 24
	0x49               goto 92
	0x4a - 0x5a (17)   goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 92
	0x6a - 0x7a (17)   goto 24

	match 47


state 69
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x48 (8)    goto 24
	0x49               goto 93
	0x4a - 0x5a (17)   goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 93
	0x6a - 0x7a (17)   goto 24

	match 47


state 70
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x63 (3)    goto 24
	0x64               goto 94
	0x65 - 0x7a (22)   goto 24

	match 47


state 71
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x63 (3)    goto 24
	0x64               goto 95
	0x65 - 0x7a (22)   goto 24

	match 47


state 72
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 33


state 73
	0x30 - 0x39 (10)   goto 73
	0x45               goto 44

	match 49


state 74
	0x30 - 0x39 (10)   goto 75


state 75
	0x30 - 0x39 (10)   goto 75

	match 49


state 76
	0x30 - 0x39 (10)   goto 24
	0x41               goto 96
	0x42 - 0x5a (25)   goto 24
	0x61               goto 96
	0x62 - 0x7a (25)   goto 24

	match 47


state 77
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x48 (8)    goto 24
	0x49               goto 97
	0x4a - 0x5a (17)   goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 97
	0x6a - 0x7a (17)   goto 24

	match 47


state 78
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4b (11)   goto 24
	0x4c               goto 98
	0x4d - 0x5a (14)   goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 98
	0x6d - 0x7a (14)   goto 24

	match 47


state 79
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 99
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 99
	0x66 - 0x7a (21)   goto 24

	match 47


state 80
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 6


state 81
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x52 (18)   goto 24
	0x53               goto 100
	0x54 - 0x5a (7)    goto 24
	0x61 - 0x72 (18)   goto 24
	0x73               goto 100
	0x74 - 0x7a (7)    goto 24

	match 47


state 82
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 23


state 83
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x42 (2)    goto 24
	0x43               goto 101
	0x44 - 0x5a (23)   goto 24
	0x61 - 0x62 (2)    goto 24
	0x63               goto 101
	0x64 - 0x7a (23)   goto 24

	match 47


state 84
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 102
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 102
	0x66 - 0x7a (21)   goto 24

	match 47


state 85
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 20


state 86
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x42 (2)    goto 24
	0x43               goto 103
	0x44 - 0x46 (3)    goto 24
	0x47               goto 104
	0x48 - 0x5a (19)   goto 24
	0x61 - 0x62 (2)    goto 24
	0x63               goto 103
	0x64 - 0x66 (3)    goto 24
	0x67               goto 104
	0x68 - 0x7a (19)   goto 24

	match 47


state 87
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x43 (3)    goto 24
	0x44               goto 105
	0x45 - 0x4b (7)    goto 24
	0x4c               goto 106
	0x4d - 0x5a (14)   goto 24
	0x61 - 0x63 (3)    goto 24
	0x64               goto 105
	0x65 - 0x6b (7)    goto 24
	0x6c               goto 106
	0x6d - 0x7a (14)   goto 24

	match 47


state 88
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4e (14)   goto 24
	0x4f               goto 107
	0x50 - 0x5a (11)   goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 107
	0x70 - 0x7a (11)   goto 24

	match 47


state 89
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4d (13)   goto 24
	0x4e               goto 108
	0x4f - 0x5a (12)   goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 108
	0x6f - 0x7a (12)   goto 24

	match 47


state 90
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 109
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 109
	0x66 - 0x7a (21)   goto 24

	match 47


state 91
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 3


state 92
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4b (11)   goto 24
	0x4c               goto 110
	0x4d - 0x5a (14)   goto 24
	0x61 - 0x6b (11)   goto 24
	0x6c               goto 110
	0x6d - 0x7a (14)   goto 24

	match 47


state 93
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x53 (19)   goto 24
	0x54               goto 111
	0x55 - 0x5a (6)    goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 111
	0x75 - 0x7a (6)    goto 24

	match 47


state 94
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 37


state 95
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 36


state 96
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x58 (24)   goto 24
	0x59               goto 112
	0x5a               goto 24
	0x61 - 0x78 (24)   goto 24
	0x79               goto 112
	0x7a               goto 24

	match 47


state 97
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4d (13)   goto 24
	0x4e               goto 113
	0x4f - 0x5a (12)   goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 113
	0x6f - 0x7a (12)   goto 24

	match 47


state 98
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 114
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 114
	0x66 - 0x7a (21)   goto 24

	match 47


state 99
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 15


state 100
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 115
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 115
	0x66 - 0x7a (21)   goto 24

	match 47


state 101
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x53 (19)   goto 24
	0x54               goto 116
	0x55 - 0x5a (6)    goto 24
	0x61 - 0x73 (19)   goto 24
	0x74               goto 116
	0x75 - 0x7a (6)    goto 24

	match 47


state 102
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x46 (6)    goto 24
	0x47               goto 117
	0x48 - 0x5a (19)   goto 24
	0x61 - 0x66 (6)    goto 24
	0x67               goto 117
	0x68 - 0x7a (19)   goto 24

	match 47


state 103
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 118
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 118
	0x66 - 0x7a (21)   goto 24

	match 47


state 104
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 119
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 119
	0x73 - 0x7a (8)    goto 24

	match 47


state 105
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 18


state 106
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 9


state 107
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 120
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 120
	0x73 - 0x7a (8)    goto 24

	match 47


state 108
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 14


state 109
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 21


state 110
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 121
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 121
	0x66 - 0x7a (21)   goto 24

	match 47


state 111
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 122
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 122
	0x66 - 0x7a (21)   goto 24

	match 47


state 112
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 4


state 113
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 1


state 114
	0x30 - 0x39 (10)   goto 24
	0x41               goto 123
	0x42 - 0x5a (25)   goto 24
	0x61               goto 123
	0x62 - 0x7a (25)   goto 24

	match 47


state 115
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 22


state 116
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x48 (8)    goto 24
	0x49               goto 124
	0x4a - 0x5a (17)   goto 24
	0x61 - 0x68 (8)    goto 24
	0x69               goto 124
	0x6a - 0x7a (17)   goto 24

	match 47


state 117
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 125
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 125
	0x66 - 0x7a (21)   goto 24

	match 47


state 118
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x43 (3)    goto 24
	0x44               goto 126
	0x45 - 0x5a (22)   goto 24
	0x61 - 0x63 (3)    goto 24
	0x64               goto 126
	0x65 - 0x7a (22)   goto 24

	match 47


state 119
	0x30 - 0x39 (10)   goto 24
	0x41               goto 127
	0x42 - 0x5a (25)   goto 24
	0x61               goto 127
	0x62 - 0x7a (25)   goto 24

	match 47


state 120
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x43 (3)    goto 24
	0x44               goto 128
	0x45 - 0x5a (22)   goto 24
	0x61 - 0x63 (3)    goto 24
	0x64               goto 128
	0x65 - 0x7a (22)   goto 24

	match 47


state 121
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 16


state 122
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 19


state 123
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4d (13)   goto 24
	0x4e               goto 129
	0x4f - 0x5a (12)   goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 129
	0x6f - 0x7a (12)   goto 24

	match 47


state 124
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4e (14)   goto 24
	0x4f               goto 130
	0x50 - 0x5a (11)   goto 24
	0x61 - 0x6e (14)   goto 24
	0x6f               goto 130
	0x70 - 0x7a (11)   goto 24

	match 47


state 125
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 131
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 131
	0x73 - 0x7a (8)    goto 24

	match 47


state 126
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x54 (20)   goto 24
	0x55               goto 132
	0x56 - 0x5a (5)    goto 24
	0x61 - 0x74 (20)   goto 24
	0x75               goto 132
	0x76 - 0x7a (5)    goto 24

	match 47


state 127
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4c (12)   goto 24
	0x4d               goto 133
	0x4e - 0x5a (13)   goto 24
	0x61 - 0x6c (12)   goto 24
	0x6d               goto 133
	0x6e - 0x7a (13)   goto 24

	match 47


state 128
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 5


state 129
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 10


state 130
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x4d (13)   goto 24
	0x4e               goto 134
	0x4f - 0x5a (12)   goto 24
	0x61 - 0x6d (13)   goto 24
	0x6e               goto 134
	0x6f - 0x7a (12)   goto 24

	match 47


state 131
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 8


state 132
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x51 (17)   goto 24
	0x52               goto 135
	0x53 - 0x5a (8)    goto 24
	0x61 - 0x71 (17)   goto 24
	0x72               goto 135
	0x73 - 0x7a (8)    goto 24

	match 47


state 133
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 2


state 134
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 11


state 135
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x44 (4)    goto 24
	0x45               goto 136
	0x46 - 0x5a (21)   goto 24
	0x61 - 0x64 (4)    goto 24
	0x65               goto 136
	0x66 - 0x7a (21)   goto 24

	match 47


state 136
	0x30 - 0x39 (10)   goto 24
	0x41 - 0x5a (26)   goto 24
	0x61 - 0x7a (26)   goto 24

	match 12


#############################################################################
# Summary
#############################################################################

1 start state(s)
56 expression(s), 136 state(s)


#############################################################################
# End of File
#############################################################################
