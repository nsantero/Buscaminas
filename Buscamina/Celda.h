#pragma once
#include <SFML/Graphics.hpp>
//#include "MatrizDelJuego.h"
#include "TexturasGlobal.h"

//extern MatrizDelJuego matrizDeLaGrillaDeJuego;


class Celda
{
protected:
	int x{0};
	int y{0};
	bool visible{false};
	bool bandera{false};
	sf::Sprite sprite;
public:
	Celda(int x,int y, const sf::Texture& textura);
	
	
	int getCoordenadaX();
	int getCoordenadaY();
	bool getVisible();
	bool getBandera();
	sf::Sprite getSprite();
	
	void setCoordenadaX(int NuevoX);
	void setCoordenadaY(int NuevoY);
	void setVisible(bool nuevoValor);
	void setBandera(bool nuevoValor);
	//void setSprite(sf::Sprite nuevo); 
	


	void cambiarTextura(const sf::Texture& nueva);
	void moverCelda(int x, int y);



	virtual int revelar() = 0;

	/*
		-2 	casilla ya revelada
		-1 	bomba
		0  	cantidad de bombasAdyacentes
		1	"
		2	"
		3	"
		4	"
		5	"
		6	"
		7	"
		8	"
	*/


	virtual int ponerBandera() = 0;
	/*
		0 bandera en casilla s/bomba
		1 bandera en bomba
		2 saca bandera de bomba
		3 click sobre numeral visible (revelar alrededor) //deberia revelar todo o solo la bomba
		4 saca bandera en casilla s/bomba
	*/
	virtual void numeralIncremento(int suma) = 0; 
};

