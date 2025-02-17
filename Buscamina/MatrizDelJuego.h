#pragma once
#include "Celdas.h"
#include <iostream>

class MatrizDelJuego
{
private:
	//tamaño grilla
	int anchoGrilla{10};
	int altoGrilla{ 10 };

	int cantidadDeBombas{13};

	int vectorDeBombas[50][2];

	int bombasNoMarcadas;
	int banderasFaltantes;//lo q va a ver el jugador
	int celdasSinRevelar;

	//Maximos para cosas setiables
	int maxBombasPermitidas{ 50 };
	int tamañoMaximoXeY{ 100 };

	//esto es para no dibujar en lo q va a ir por afuera
	int offsetX{ 20 };
	int offsetY{ 35 }; //TODO deshardcodear




public:
	std::unique_ptr<Celda> matrizMapa[100][100];


	MatrizDelJuego();

	void dibujarMatriz(sf::RenderWindow& window);

	void distribuirBombas(int x,int y);

	int revelarCeldas(int x,int y);
	int clickDerecho(int x, int y);

	int revelarTodo();


	int getDimensionesX();
	int getDimensionesY();


	int getAnchoGrilla();
	int getAltaGrilla();
	int getCantidadDeBombas();
	int getBombasNoMarcadas();
	int getCeldasSinRevelar();
	int getOffsetX();
	int getOffsetY();
	int getBanderasFaltantes();



	void setAnchoGrilla(int x);
	void setAltoGrilla(int y);
	void setCantidadDeBombas(int cant);

};
