#include "entio.h"






void entio::atacarEspada(int direccio)
{

}

entio::entio(int posx, int posy, char rep)
{
	pos Pos;
	Pos.x = posx;
	Pos.y = posy;
	arrowsLeft = 10;
	int fatiga = 0;
	representation = rep;
}

entio::~entio()
{
}
