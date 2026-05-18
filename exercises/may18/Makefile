.PHONY: all
all: example

example: example.o matrix1.o
	clang example.o matrix1.o -o example

example.o: example.c matrix1.h
	clang -c example.c

matrix1.o: matrix1.c matrix1.h
	clang -c matrix1.c
