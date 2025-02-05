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

	virtual int revelar() = 0;
	virtual int ponerBandera() = 0;
	virtual void numeralIncremento(int suma) = 0; 
};

