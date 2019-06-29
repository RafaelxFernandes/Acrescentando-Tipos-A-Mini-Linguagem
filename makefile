# all: mini entrada.txt
# 	./mini	

lex.yy.c: mini.l
	lex mini.l

y.tab.c: mini.y
	yacc mini.y

mini: lex.yy.c y.tab.c
	g++ --std=c++11 -Wno-deprecated-register -o mini y.tab.c -lfl