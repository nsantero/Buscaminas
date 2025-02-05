#pragma once
#include <SFML/Graphics.hpp>
#include "mapaDeTexturas.h"

class Texturas
{

public:
	sf::Texture celdasNumericas[9];
	sf::Texture celdaOculta;
	sf::Texture bomba;
	sf::Texture bandera;

	Texturas();

};

