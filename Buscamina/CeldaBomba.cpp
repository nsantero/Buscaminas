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
	
	
	if (bandera) {
		sprite.setTexture(texturas.bandera);
		return 1;
	}
	else {
		sprite.setTexture(texturas.celdaOculta);
		return 2;
	}

}

void CeldaBomba::numeralIncremento(int suma)
{
}
