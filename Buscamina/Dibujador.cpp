#include "Dibujador.h"


void Dibujador::dibujarMatriz(MatrizDelJuego& matriz, sf::RenderWindow& window)
{
	for (int i = 0;i < matriz.getAnchoGrilla();i++) {
		for (int j = 0;j < matriz.getAltaGrilla();j++) {
			window.draw(matriz.matrizMapa[i][j]->getSprite());
		}
	}
}
