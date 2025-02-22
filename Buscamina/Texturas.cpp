#include "Texturas.h"

Texturas::Texturas()
{
	//-------------------------------------------------------------------------------------------------Celdas
	celdasNumericas[0] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX,ultimoCuadradoY},{16,16} });
	celdasNumericas[1] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamaņanoCuadrado * 1},{tamaņanoCuadrado,tamaņanoCuadrado} });
	celdasNumericas[2] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamaņanoCuadrado * 2},{tamaņanoCuadrado,tamaņanoCuadrado} });
	celdasNumericas[3] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamaņanoCuadrado * 3},{tamaņanoCuadrado,tamaņanoCuadrado} });
	celdasNumericas[4] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamaņanoCuadrado * 4},{tamaņanoCuadrado,tamaņanoCuadrado} });
	celdasNumericas[5] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamaņanoCuadrado * 5},{tamaņanoCuadrado,tamaņanoCuadrado} });
	celdasNumericas[6] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamaņanoCuadrado * 6},{tamaņanoCuadrado,tamaņanoCuadrado} });
	celdasNumericas[7] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamaņanoCuadrado * 7},{tamaņanoCuadrado,tamaņanoCuadrado} });
	celdasNumericas[8] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamaņanoCuadrado * 8},{tamaņanoCuadrado,tamaņanoCuadrado} });

	celdaOculta = sf::Texture(path, false, sf::IntRect{ {0,0},{16,16} });//TODO deshardcodear
	bomba = sf::Texture(path, false, sf::IntRect{ {bombaFondogrisX,bombaFondogrisY},{16,16} });
	bandera = sf::Texture(path, false, sf::IntRect{ {banderitaX,banderitaY},{16,16} });


	numerador[0] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX,ultimoNumeroY},{anchoNumero,alturaNumero} });
	numerador[1] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 1},{anchoNumero,alturaNumero} });
	numerador[2] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 2},{anchoNumero,alturaNumero} });
	numerador[3] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 3},{anchoNumero,alturaNumero} });
	numerador[4] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 4},{anchoNumero,alturaNumero} });
	numerador[5] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 5},{anchoNumero,alturaNumero} });
	numerador[6] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 6},{anchoNumero,alturaNumero} });
	numerador[7] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 7},{anchoNumero,alturaNumero} });
	numerador[8] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 8},{anchoNumero,alturaNumero} });
	numerador[9] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 9},{anchoNumero,alturaNumero} });
	numerador[10] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 10},{anchoNumero,alturaNumero} });
	numerador[11] = sf::Texture(path, false, sf::IntRect{ {ultimoNumeroX ,ultimoNumeroY - alturaNumero * 11},{anchoNumero,alturaNumero} });

	caritaLentes = sf::Texture(path, false, sf::IntRect{ { primeraCaritaX,primeraCaritaY + tamaņoCarita},{tamaņoCarita,tamaņoCarita} });
	caritaMuerta = sf::Texture(path, false, sf::IntRect{ { primeraCaritaX,primeraCaritaY + tamaņoCarita * 2},{tamaņoCarita,tamaņoCarita} });
	caritaJugando= sf::Texture(path, false, sf::IntRect{ { primeraCaritaX,primeraCaritaY + tamaņoCarita * 4},{tamaņoCarita,tamaņoCarita} });
	
}




