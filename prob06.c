#include "chess.h"
#include "figures.h"
char** line(){
  return repeatH(join(reverse(whiteSquare), whiteSquare),4);
}
char** lineFigure(){
  char** figures[] = {rook,knight,bishop,queen,king,bishop,knight,rook};
  char** lineBase = line();
  char** result = *figures;
  for(int i=1 ; i<8 ; i++){
    result = join(result,figures[i]);
  }
  char** lineF = superImpose(result,lineBase);
  return lineF;
}

char** linePawns(){
  
  char** lineBase = reverse(line());
  char** result = pawn;
  for(int i=1 ; i<8 ; i++){
    result = join(result,pawn);
  }
  char** lineF = superImpose(result,lineBase);
  return lineF;
}

char** mitadTablaUp(){
  char** twoLinesFigures = up(lineFigure(), linePawns());
  char** twoLinesSquares = up(line(), reverse(line()));
  char** mitadT = up(twoLinesFigures, twoLinesSquares);
  return mitadT;
}

char** mitadTablaDown(){
  char** twoLinesSquares = up(line(), reverse(line()));
  char** pawnB = reverse(linePawns());
  char** figuresB = reverse(lineFigure());
  char** twoLinesFigures = up(pawnB, figuresB);
  char** mitadT = up(twoLinesSquares, twoLinesFigures);
  return mitadT;
}

void display (){
  char** table = up(mitadTablaUp(), mitadTablaDown());
  interpreter(table);

}
