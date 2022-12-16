all:
		gcc -c helper.c 
		yacc -dtv A5_9.y
		flex A5_9.l
		gcc -c  lex.yy.c
		gcc -c y.tab.c 
		gcc helper.o lex.yy.o y.tab.o -lfl
		gcc -c A5_9.c
		gcc helper.o A5_9.o -o A5_9
		./A5_9