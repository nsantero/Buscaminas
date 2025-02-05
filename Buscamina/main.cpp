#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "Celdas.h"
#include "Dibujador.h"
#include "estadoDeLaPartidaEnum.h"

int main()
{
    sf::ContextSettings settings;
    
    sf::RenderWindow window(sf::VideoMode({ 200, 200 }), "Buscaminas");
    
    
    MatrizDelJuego matriz;
    Dibujador dibujador;
    

    EstadoDeLaPartida estadoDeLaPartida = EstadoDeLaPartida::NOEMPEZADA;
    
    

    
    
    


    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
           /*PRUEBAS TODO BORRAR
            if (sf::Keyboard::(sf::Keyboard::Key::W)event->is<sf::Event::KeyPressed>()) {
                if (contadorPrueba < 8) {
                    contadorPrueba++;
                }
                else {
                    contadorPrueba = 0;
                }
                celdaPrueba.cambiarTextura(texturas.celdasNumericas[contadorPrueba]);
                std::cout << "numeral: " << contadorPrueba << std::endl;
            }*/

            if (const auto* botonDelMouseApretado = event->getIf<sf::Event::MouseButtonPressed>()) {
                if (botonDelMouseApretado->button == sf::Mouse::Button::Left) {
                    //TODO deshardcodear, q dentro de la matriz sepa donde empieza la cuadricula del juego
                    int numeroDeCeldaX = (botonDelMouseApretado->position.x+0) / tamañanoCuadrado;/* +0  por q en este caso hardcodeado la cuadricula empieza ahi*/
                    int numeroDeCeldaY = (botonDelMouseApretado->position.y+0) / tamañanoCuadrado;

                    if (estadoDeLaPartida==EstadoDeLaPartida::NOEMPEZADA) {
                        matriz.distribuirBombas(numeroDeCeldaX, numeroDeCeldaY);
                        estadoDeLaPartida = EstadoDeLaPartida::EMPEZADA; 
                    }
  
                     matriz.revelarCeldas(numeroDeCeldaX, numeroDeCeldaY);
                    
                }
            }


        }

        window.clear();
        //matrizDeLaGrillaDeJuego.dibujarMatriz(window);
        dibujador.dibujarMatriz(matriz, window);
        window.display();
    }
}