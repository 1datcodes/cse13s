.PHONY: all
all: main

HEADERS=module1.h module2.h
#HEADERS=$(wildcard *.h) ## this will work as well

main.o: main.c $(HEADERS)
	clang -c -Wall -Wextra main.c

module1.o: module1.c $(HEADERS)
	clang -c -Wall -Wextra module1.c

module2.o: module2.c $(HEADERS)
	clang -c -Wall -Wextra module2.c

main: main.o module1.o module2.o
	clang main.o module1.o module2.o -o main

