#include "Dibujador.h"


Dibujador::Dibujador(Texturas texturasAAA): carita(texturasAAA.caritaLentes),unidadesBombas(texturasAAA.numerador[11]),
decenasBombas(texturasAAA.numerador[11]), unidadesTimer(texturasAAA.numerador[11]), decenasTimer(texturasAAA.numerador[11])
{	//TODO desharcodear
	decenasBombas.setPosition({30,5});
	unidadesBombas.setPosition({ 30 + (float)anchoNumero,5 });

	decenasTimer.setPosition({ 200 - 30 - (float)anchoNumero,5 });
	unidadesTimer.setPosition({ 200 - 30,5 });

	carita.setPosition({ 100 - ((float)tamañoCarita / 2),5 });
}

sf::Vector2f Dibujador::getPosicionCarita()
{
	return carita.getPosition();
}

void Dibujador::dibujarMatriz(MatrizDelJuego& matriz, sf::RenderWindow& window)
{
	for (int i = 0;i < matriz.getAnchoGrilla();i++) {
		for (int j = 0;j < matriz.getAltaGrilla();j++) {
			window.draw(matriz.matrizMapa[i][j]->getSprite());
		}
	}
}

void Dibujador::dibujarCarita(EstadoDeLaPartida estadoPartida, sf::RenderWindow& window)
{
	if (estadoPartida == EstadoDeLaPartida::EMPEZADA || estadoPartida == EstadoDeLaPartida::NOEMPEZADA) {
		carita.setTexture(texturas.caritaJugando);
	}
	else if (estadoPartida == EstadoDeLaPartida::PERDIDA) {
		carita.setTexture(texturas.caritaMuerta);
	}
	else if (estadoPartida == EstadoDeLaPartida::GANADA) {
		carita.setTexture(texturas.caritaLentes);
	}

	window.draw(carita);
}

void Dibujador::dibujarContadorBombas(int cantBombas,sf::RenderWindow& window)
{
	int unidades;
	int decenas;
	if (cantBombas >= 0) {
		unidades = cantBombas % 10;
		decenas = (cantBombas - unidades) / 10;
	}
	else
	{
		unidades = 0;
		decenas = 0;
	}
	unidadesBombas.setTexture(texturas.numerador[unidades]);
	decenasBombas.setTexture(texturas.numerador[decenas]);

	window.draw(unidadesBombas);
	window.draw(decenasBombas);
	


}

void Dibujador::dibujarTimer()
{
}

void Dibujador::dibujarFondo(sf::RenderWindow& window)
{   //TODO deshardcodear
	sf::RectangleShape fondo({ 200,200 });
	sf::Color colorFondo(198, 198, 198, 255);
	fondo.setFillColor(colorFondo);
	window.draw(fondo);
	sf::RectangleShape bordeAbajoDer({ 163,163 });
	sf::Color colorBordeAbajoDer(255, 255, 255, 255);
	bordeAbajoDer.setPosition({ 20,35 });
	bordeAbajoDer.setFillColor(colorBordeAbajoDer);
	window.draw(bordeAbajoDer);
	sf::RectangleShape bordeArribaIzq({163, 163});
	sf::Color colorBordeArribaIzq(132, 132, 132, 255);
	bordeArribaIzq.setPosition({ 18,33 });
	bordeArribaIzq.setFillColor(colorBordeArribaIzq);
	window.draw(bordeArribaIzq);
	
}

