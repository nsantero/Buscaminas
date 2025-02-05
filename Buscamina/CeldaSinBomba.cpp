#include "CeldaSinBomba.h"

CeldaSinBomba::CeldaSinBomba(int x, int y, const sf::Texture& sprite) : Celda(x, y, sprite)
{
}

int CeldaSinBomba::revelar() 
{
	
	if (!visible) {
		visible = true;
		sprite.setTexture(texturas.celdasNumericas[numeral]);
		return numeral;
	}
	else
	{
		return -2;//TODO temporal, codigo de no hace nada, eventualmente puede hacer la cosa q te revela los cuadrados si tenes todas las banderas
	}
}

int CeldaSinBomba::ponerBandera()
{
	bandera = !bandera;
	return 0;
}

int CeldaSinBomba::getNumeral()
{
	return numeral;
}

void CeldaSinBomba::setNumeral(int nuevo)
{
	numeral = nuevo;
}

void CeldaSinBomba::numeralIncremento(int suma)
{
	numeral += suma;
}
