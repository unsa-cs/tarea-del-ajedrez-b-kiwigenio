#include "chess.h"
#include "figures.h"

void display (){
  char ** cuadradoB=whiteSquare;
  char ** cuadradoN= reverse(cuadradoB);

  char ** lineaT= repeatH(join(cuadradoB,cuadradoN),4);
  char ** lineaInversa= repeatH(join(cuadradoN, cuadradoB),4);
  char ** prueba= up (cuadradoB,cuadradoN);
  interpreter(join(queen, prueba));
}
