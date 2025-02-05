#include "CeldaBomba.h"

CeldaBomba::CeldaBomba(int x, int y, const sf::Texture& sprite) :Celda(x, y, sprite)
{
}

int CeldaBomba::revelar()
{
	sprite.setTexture(texturas.bomba);
	return -1;
}

int CeldaBomba::ponerBandera()
{
	bandera = !bandera;
	return 0;
}

void CeldaBomba::numeralIncremento(int suma)
{
}
