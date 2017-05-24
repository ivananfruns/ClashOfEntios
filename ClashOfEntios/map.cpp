#include "map.h"



map::map()
{
	//creamos tantos punteros que apuntaran a las filas como filas tengamos
	md = new char*[numRows];

	//hacemos que cada puntero que apunta a las filas tenga tantos elementos (columnas) como columns tengamos
	for (int i = 0; i < numRows; i++)
	{
		md[i] = new char[numColumns];
	}


	//por ultimo el constructor inicializa todos los huecos de nuestra "matrix" 
	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < numColumns; j++)
		{

			md[i][j] = '.';
		}
	}

}


map::~map()
{
}
