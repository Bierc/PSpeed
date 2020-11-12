# Declaring the variables.

CC=gcc

CFLAGS=-c



ARCHIVESdotO=src/main.o src/game.o src/instructions.o src/menu.o src/words.o src/stack_proprieties.o

# Now executing the makefile.

all: main



main.o: src/main.c
	$(CC) $(CFLAGS) src/main.c 

jogo.o: src/jogo.c
	$(CC) $(CFLAGS) src/jogo.c 

menu.o: src/menu.c
	$(CC) $(CFLAGS) src/menu.c 

instructions.o: src/instructions.c
	$(CC) $(CFLAGS) src/instructions.c 

words.o: src/words.c
	$(CC) $(CFLAGS) src/words.c 

instrucoes.o: src/stack_proprieties.c
	$(CC) $(CFLAGS) src/stack_proprieties.c

clean:
	rm -rf *o main


