14-4: 14-4.o func1.o func2.o
	gcc -o 14-4 14-4.o func1.o func2.o

14-4.o: func.h 14-4.c
	gcc -c -o 14-4.o 14-4.c

func1.o: func.h func1.c
	gcc -c -o func1.o func1.c
func2.o: func.h func2.c
	gcc -c -o func2.o func2.c
