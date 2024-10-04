#include "chess.h"
#include "figures.h"

void display(){
	char** blackKnight = reverse(queen);
  interpreter(blackKnight);
}

