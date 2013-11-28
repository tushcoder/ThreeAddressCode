lex example.l
yacc -d example.y
gcc y.tab.c lex.yy.c -lfl -o example
