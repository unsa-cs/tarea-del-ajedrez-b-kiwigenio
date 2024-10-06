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
  
  char** lineBase = line();
  char* tmp1= {"si","no",0};
  char** tmp2= &tmp1; 

  char** result = tmp2;
  for(int i=0 ; i<8 ; i++){
    result = join(result,pawn);
  }
  char** lineF = superImpose(result,lineBase);
  return lineF;
}


void display (){
  interpreter(linePawns());

}
