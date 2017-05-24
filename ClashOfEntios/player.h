#pragma once
class player
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
	void atacarEspada();
	void atacarArco();
	player(int posx, int posy, char rep);
	~player();
};

