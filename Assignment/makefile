prog: main.o searchPrint.o addDelete.o
	gcc -o prog main.o searchPrint.o addDelete.o -I.

main.o: main.c main.h addDelete.h searchPrint.h
	gcc -c main.c

addDelete.o: addDelete.c main.h addDelete.h
	gcc -c addDelete.c

searchPrint.o: searchPrint.c main.h 
	gcc -c searchPrint.c


