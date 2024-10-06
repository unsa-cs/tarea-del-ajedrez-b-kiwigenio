#include "chess.h"
#include "figures.h"
char** line(){
  return repeatH(join(reverse(whiteSquare), whiteSquare),4);
}
char** lineFigure(){
  char** figures1 = join(rook, join(knight, bishop));
  char** figures2 = join(queen, king);
  char** figures3 = join(bishop, join(knight, rook));

  char** figures4 = join(figures1, join(figures2, figures3));
  char** figures4R= reverse(figures4);
  char** lineaFigura = superImpose(figures4R, line());
  return lineaFigura;
}
void display (){

  char** test = join(reverse(whiteSquare),whiteSquare);

  interpreter(lineFigure());

}
