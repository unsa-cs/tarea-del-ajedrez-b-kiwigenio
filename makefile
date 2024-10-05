all: main.o 
	g++ -no-pie main.o chess.o $(HW).c -lglut -lGL -lGLU -w -o $(HW)
main.o: main.c
	g++ -c main.c
