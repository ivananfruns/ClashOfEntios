#pragma once
class entio
{
	struct pos
	{
		int x;
		int y;
	};
	int arrowsLeft;
	int fatiga;
	char representation;
public:
	void atacar();
	void atacarEspada(int direccio);
	void atacarArco();
	entio(int posx, int posy, char rep);
	~entio();
};

