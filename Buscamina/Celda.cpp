
#include "Celda.h"

//MatrizDelJuego matrizDeLaGrillaDeJuego;


Celda::Celda(int x, int y, const sf::Texture& textura): x(x),y(y),sprite(textura)
{
	sprite.setPosition({(float)x*tamañanoCuadrado,(float)y*tamañanoCuadrado});
}


int Celda::getCoordenadaX()
{
	return x;
}

int Celda::getCoordenadaY()
{
	return y;
}

bool Celda::getVisible()
{
	return visible;
}

bool Celda::getBandera()
{
	return bandera;
}

sf::Sprite Celda::getSprite()
{
	return sprite;
}

void Celda::setCoordenadaX(int NuevoX)
{
	x = NuevoX;
}

void Celda::setCoordenadaY(int NuevoY)
{
	y = NuevoY;
}

void Celda::setVisible(bool nuevoValor)
{
	visible = nuevoValor;
}

void Celda::setBandera(bool nuevoValor)
{
	bandera = nuevoValor;
}

/*void Celda::setSprite(sf::Sprite nuevo)
{
	sprite = nuevo;
}*/

void Celda::cambiarTextura(const sf::Texture& nueva)
{
	sprite.setTexture(nueva);
}

