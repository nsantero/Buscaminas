#include "Texturas.h"

Texturas::Texturas()
{
	//-------------------------------------------------------------------------------------------------Celdas
	celdasNumericas[0] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX,ultimoCuadradoY},{16,16} });
	celdasNumericas[1] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX - 16 *1,ultimoCuadradoY - 16 *1},{16,16} });
	celdasNumericas[2] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX - 16 *2,ultimoCuadradoY - 16 *2},{16,16} });
	celdasNumericas[3] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX - 16 *3,ultimoCuadradoY - 16 *3},{16,16} });
	celdasNumericas[4] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX - 16 *4,ultimoCuadradoY - 16 *4},{16,16} });
	celdasNumericas[5] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX - 16 *5,ultimoCuadradoY - 16 *5},{16,16} });
	celdasNumericas[6] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX - 16 *6,ultimoCuadradoY - 16 *6},{16,16} });
	celdasNumericas[7] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX - 16 *7,ultimoCuadradoY - 16 *7},{16,16} });
	celdasNumericas[8] = sf::Texture(path, false, sf::IntRect{ {ultimoCuadradoX - 16 *8,ultimoCuadradoY - 16 *8},{16,16} });

	celdaOculta = sf::Texture(path, false, sf::IntRect{ {0,0},{16,16} });//TODO deshardcodear
	bomba = sf::Texture(path, false, sf::IntRect{ {bombaFondogrisX,bombaFondogrisY},{16,16} });
	bandera = sf::Texture(path, false, sf::IntRect{ {banderitaX,banderitaY},{16,16} });
	

}


