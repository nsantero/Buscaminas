#include "Texturas.h"

Texturas::Texturas()
{
	//-------------------------------------------------------------------------------------------------Celdas
	celdasNumericas[0] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX,ultimoCuadradoY},{16,16} });
	celdasNumericas[1] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tama�anoCuadrado * 1},{tama�anoCuadrado,tama�anoCuadrado} });
	celdasNumericas[2] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tama�anoCuadrado * 2},{tama�anoCuadrado,tama�anoCuadrado} });
	celdasNumericas[3] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tama�anoCuadrado * 3},{tama�anoCuadrado,tama�anoCuadrado} });
	celdasNumericas[4] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tama�anoCuadrado * 4},{tama�anoCuadrado,tama�anoCuadrado} });
	celdasNumericas[5] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tama�anoCuadrado * 5},{tama�anoCuadrado,tama�anoCuadrado} });
	celdasNumericas[6] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tama�anoCuadrado * 6},{tama�anoCuadrado,tama�anoCuadrado} });
	celdasNumericas[7] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tama�anoCuadrado * 7},{tama�anoCuadrado,tama�anoCuadrado} });
	celdasNumericas[8] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX  ,ultimoCuadradoY - tama�anoCuadrado * 8},{tama�anoCuadrado,tama�anoCuadrado} });

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

	caritaLentes = sf::Texture(path, false, sf::IntRect{ { primeraCaritaX,primeraCaritaY + tama�oCarita},{tama�oCarita,tama�oCarita} });
	caritaMuerta = sf::Texture(path, false, sf::IntRect{ { primeraCaritaX,primeraCaritaY + tama�oCarita * 2},{tama�oCarita,tama�oCarita} });
	caritaJugando= sf::Texture(path, false, sf::IntRect{ { primeraCaritaX,primeraCaritaY + tama�oCarita * 4},{tama�oCarita,tama�oCarita} });
	
}




