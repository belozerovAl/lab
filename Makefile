.PHONY: all, clean, run
all: lab
clean:
	rm lab *.o
run: lab
	./lab
main.o: main.c
	gcc -c main.c
funcs.o: funcs.c
	gcc -c funcs.c
lab: main.o funcs.o
	gcc main.o funcs.o -o lab

