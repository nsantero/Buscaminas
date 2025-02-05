#pragma once
#include "Celdas.h"

class MatrizDelJuego
{
private:
	//tamaño grilla
	int anchoGrilla{10};
	int altoGrilla{ 10 };

	int cantidadDeBombas{8};

	int vectorDeBombas[50][2];

public:
	std::unique_ptr<Celda> matrizMapa[10][10];


	MatrizDelJuego();

	void dibujarMatriz(sf::RenderWindow& window);

	void distribuirBombas(int x,int y);

	int revelarCeldas(int x,int y);

	int getAnchoGrilla();
	int getAltaGrilla();
	int getCantidadDeBombas();

	void setAnchoGrilla(int x);
	void setAltoGrilla(int y);
	void setCantidadDeBombas(int cant);

};
