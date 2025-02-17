#pragma once
#include "MatrizDelJuego.h"
#include "Texturas.h"
#include "estadoDeLaPartidaEnum.h"

class Dibujador
{
private:

	sf::Sprite carita;

	sf::Sprite unidadesBombas;
	sf::Sprite decenasBombas;

	sf::Sprite unidadesTimer;
	sf::Sprite decenasTimer;

	

public:
	Dibujador(Texturas texturasAAA);

	sf::Vector2f getPosicionCarita();

	void dibujarMatriz(MatrizDelJuego& matriz, sf::RenderWindow& window);
	void dibujarCarita(EstadoDeLaPartida estadoPartida, sf::RenderWindow& window);
	void dibujarContadorBombas(int cantBombas, sf::RenderWindow& window);
	void dibujarTimer();

	void dibujarFondo(sf::RenderWindow& window);
	

};

