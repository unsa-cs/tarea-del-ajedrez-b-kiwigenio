#include "chess.h"
#include "figures.h"

void display(){
	char** cuadradoB = whiteSquare;
	interpreter(reverse(reverse(cuadradoB)));
}

