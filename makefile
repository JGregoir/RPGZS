objects = sandbox.o Arme.o Personnage.o
CC=g++
executable : $(objects)
	$(CC) -o executable $(objects)

sandbox.o : Personnage.h
Arme.o : Arme.h
Personnage.o : Personnage.h

.PHONY : clean
clean :
	-rm executable $(objects)

all: run

run: executable
	./executable

.PHONY: all run
