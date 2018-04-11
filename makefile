all: helper.o main.o assemblerOperations.o
	gcc -g -Wall -o calc main.o helper.o assemblerOperations.o
main.o: main.c main.h
	gcc -g -Wall -c -o main.o main.c
helper.o:  helper.c main.h
	gcc -g -Wall -c -o helper.o helper.c
assemblerOperations.o: assemblerOperations.s main.h
	nasm -g -f elf64 -w+all -o assemblerOperations.o assemblerOperations.s
.PHONY: clean
clean:
	rm -f *.o calc
