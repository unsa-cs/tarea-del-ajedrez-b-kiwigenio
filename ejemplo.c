#include "chess.h"
#include "figures.h"


void display(){
  char joseok = probar;
    char ** new = jose;
  char** cuadradoB = whiteSquare;
  char** cuadradoN = reverse(cuadradoB);

  char** lineaT = repeatH(join(cuadradoB, cuadradoN), 4);
  char** lineaInversa = repeatH(join(cuadradoN, cuadradoB), 4);
  interpreter(lineaInversa);
  interpreter(queen);
  
  
}

