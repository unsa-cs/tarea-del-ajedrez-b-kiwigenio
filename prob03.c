#include "chess.h"
#include "figures.h"
char ** line(){
  return repeatH(join(whiteSquare, reverse(whiteSquare)),4);
}

void display (){

  char** twoL = up(reverse(line()), line());
  interpreter(twoL);

}
