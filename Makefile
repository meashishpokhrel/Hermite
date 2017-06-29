FC=gcc -c
LD=gcc
SRC=main.c fact.c hermiteEven.c hermiteOdd.c
OBJ=main.o fact.o hermiteEven.o hermiteOdd.o 
hermite:
	$(FC) $(SRC)
	$(LD) $(OBJ) -o hermite.x -lm
	rm -rf *.o
clean:
	rm -rf hermite.x
	rm -rf *.o

