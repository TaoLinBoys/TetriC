files = pieces.c board.c tetris.c -lm

all: tetris server client

tetris: $(files) 
	gcc $(files) $(shell pkg-config --cflags --libs sdl2) -o tetris

server: server.o networking.o
	gcc -o server server.o networking.o 

client: client.o networking.o
	gcc -o client client.o networking.o 

server.o: server.c networking.h
	gcc -c server.c

client.o: client.c networking.h
	gcc -c client.c

networking.o: networking.c networking.h
	gcc -c networking.c

run:
	./tetris

clean:
	rm tetris
	rm *~
