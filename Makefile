all: func.o main.o
	gcc main.o func.o
func.o: func.c
	gcc -c func.c -lm
main.o: main.c
	gcc -c main.c -lm
clean:
	rm *.o
install:
	cp a.out/usr/bin
