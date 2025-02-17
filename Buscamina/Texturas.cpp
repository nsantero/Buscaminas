#include "Texturas.h"

Texturas::Texturas()
{
	//-------------------------------------------------------------------------------------------------Celdas
	celdasNumericas[0] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX,ultimoCuadradoY},{16,16} });
	celdasNumericas[1] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamañanoCuadrado * 1},{tamañanoCuadrado,tamañanoCuadrado} });
	celdasNumericas[2] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamañanoCuadrado * 2},{tamañanoCuadrado,tamañanoCuadrado} });
	celdasNumericas[3] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamañanoCuadrado * 3},{tamañanoCuadrado,tamañanoCuadrado} });
	celdasNumericas[4] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamañanoCuadrado * 4},{tamañanoCuadrado,tamañanoCuadrado} });
	celdasNumericas[5] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamañanoCuadrado * 5},{tamañanoCuadrado,tamañanoCuadrado} });
	celdasNumericas[6] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamañanoCuadrado * 6},{tamañanoCuadrado,tamañanoCuadrado} });
	celdasNumericas[7] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamañanoCuadrado * 7},{tamañanoCuadrado,tamañanoCuadrado} });
	celdasNumericas[8] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tamañanoCuadrado * 8},{tamañanoCuadrado,tamañanoCuadrado} });

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

	caritaLentes = sf::Texture(path, false, sf::IntRect{ { primeraCaritaX,primeraCaritaY + tamañoCarita},{tamañoCarita,tamañoCarita} });
	caritaMuerta = sf::Texture(path, false, sf::IntRect{ { primeraCaritaX,primeraCaritaY + tamañoCarita * 2},{tamañoCarita,tamañoCarita} });
	caritaJugando= sf::Texture(path, false, sf::IntRect{ { primeraCaritaX,primeraCaritaY + tamañoCarita * 4},{tamañoCarita,tamañoCarita} });
	
}




