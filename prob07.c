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

char** cuadrante(){
  char** blanco=whiteSquare;
  char** negro=reverse(whiteSquare);
  char** caballo=knight;
  for(int i=1;i<8;i++){
    if (i==1){
      caballo=superImpose(caballo, join(blanco,negro)); 
    }
    else if (i%2==0) {
      caballo= join(caballo,blanco);
    }
    else{
      caballo= join(caballo, negro);
    }
  }
  return caballo;

}

void display (){
  char** table = up(mitadTablaUp(), mitadTablaDown());
  
  char** prueba1 = rotateL(knight);
  char** prueba2 = rotateR(knight);

  char** prueba3 = rotateL(rotateL(knight));
  char** prueba4 = rotateR(rotateR(knight));

  interpreter(cuadrante());

}
