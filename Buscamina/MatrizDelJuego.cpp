#include "MatrizDelJuego.h"
#include <random>


MatrizDelJuego::MatrizDelJuego()
{
	for (int i = 0;i < anchoGrilla;i++) {
		for (int j = 0;j < altoGrilla;j++) {
			matrizMapa[i][j]=std::make_unique<CeldaSinBomba>(i,j,texturas.celdaOculta);
		}
	}
}

void MatrizDelJuego::dibujarMatriz(sf::RenderWindow& window)
{
	window.draw(matrizMapa[0][0]->getSprite());
}

void MatrizDelJuego::distribuirBombas(int x, int y)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 9);

    int aux[2];
    int condicion1;
    int condicion2;
    //-------------------------------Genera las bombas
    for (int i = 0;i < cantidadDeBombas;i++)   {
        
        condicion1 = 0;
        condicion2 = 0;


        aux[0] = distrib(gen);
        aux[1] = distrib(gen);

        if (aux[0] != x && aux[1] != y) {
            for (int k = 0;k < i;k++) {
                if(vectorDeBombas[k][0]==aux[0]) {
                    condicion1 = 1;
                }
                if (vectorDeBombas[k][1] == aux[1]) {
                    condicion2 = 1;
                }
                if (condicion1&&condicion2) {
                    break;
                }
            }

        }
        else {
            condicion1 = 1;
            condicion2 = 1; 
        }

        while (condicion1&&condicion2)
        {
            condicion1 = 0;
            condicion2 = 0;

            aux[0] = distrib(gen);
            aux[1] = distrib(gen);
                
            if (aux[0] != x && aux[1] != y) {
                for (int k = 0;k < i;k++) {
                    if (vectorDeBombas[k][0] == aux[0]) {
                        condicion1 = 1;
                    }
                    if (vectorDeBombas[k][1] == aux[1]) {
                        condicion2 = 1;
                    }
                    if (condicion1 && condicion2) {
                        break;
                    }
                }

            }
            else {
                condicion1 = 1;
                condicion2 = 1;
            }


        }
        vectorDeBombas[i][0] = aux[0];
        vectorDeBombas[i][1] = aux[1];

        
    }
    
    //-------------------------------"Coloca" las bombas

    for (int i = 0;i < cantidadDeBombas;i++) {

        int auxX = vectorDeBombas[i][0]; 
        int auxY = vectorDeBombas[i][1];
        matrizMapa[auxX][auxY] = std::make_unique<CeldaBomba>(auxX, auxY,texturas.celdaOculta); 
        //---------------------------cuenta en otras casillas
        for (int i = -1;i < 2; i++) {
            for (int j = -1;j < 2;j++) {
                if ((auxX + i) < anchoGrilla && (auxY + j) < altoGrilla && (auxX + i) >= 0 && (auxY + j) >= 0) {
                    matrizMapa[auxX+i][auxY+j]->numeralIncremento(1);
                }
            }
        }


    }





}

int MatrizDelJuego::revelarCeldas(int x, int y)
{
    int respuesta = matrizMapa[x][y]->revelar();

    if (!respuesta) {
        for (int i = -1;i < 2; i++) {
            for (int j = -1;j < 2;j++) {
                if ((!j || !i) && (x + i) < anchoGrilla && (y + j) < altoGrilla && (x + i) >= 0 && (y + j) >= 0) {
                    revelarCeldas(x + i, y + j);
                }
            }
        }
    }
    else if (respuesta == -1) {
        return 0;
    }

    return 1;
}

int MatrizDelJuego::getAnchoGrilla()
{
	return anchoGrilla;
}

int MatrizDelJuego::getAltaGrilla()
{
	return altoGrilla;
}

int MatrizDelJuego::getCantidadDeBombas()
{
    return cantidadDeBombas;
}

void MatrizDelJuego::setAnchoGrilla(int x)
{
	anchoGrilla = x;
}

void MatrizDelJuego::setAltoGrilla(int y)
{
	altoGrilla = y;
}

void MatrizDelJuego::setCantidadDeBombas(int cant)
{
    cantidadDeBombas = cant;
}
