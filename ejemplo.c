#include "chess.h"
#include "figures.h"

void display(){
  char** cuadradoB = whiteSquare;
  char** cuadradoN = reverse(cuadradoB);


  interpreter(join(cuadradoB,cuadradoN));

}

