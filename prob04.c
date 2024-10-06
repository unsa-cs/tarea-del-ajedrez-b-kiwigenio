#include "chess.h"
#include "figures.h"
char** line(){
  return repeatH(join(reverse(whiteSquare), whiteSquare),4);
}
void display (){
  
  char** twoL = up(reverse(line()), line());
  char** test = join(reverse(whiteSquare),whiteSquare);
  char** figures1 = join(rook, join(knight, bishop));
  char** figures2 = join(queen, king);
  char** figures3 = join(bishop, join(knight, rook));

  char** figures4 = join(figures1, join(figures2, figures3));
  char** lineaFigura = superImpose(figures4, line());

  interpreter(lineaFigura);

}
