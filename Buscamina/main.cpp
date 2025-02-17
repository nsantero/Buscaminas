#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "Celdas.h"
#include "Dibujador.h"
#include "estadoDeLaPartidaEnum.h"

void reiniciarPartida(EstadoDeLaPartida& estado, MatrizDelJuego& matriz);

int main()
{
    sf::ContextSettings settings;
    
    sf::RenderWindow window(sf::VideoMode({ 200, 200 }), "Buscaminas");
    
    
    MatrizDelJuego matriz;
    Dibujador dibujador = Dibujador(texturas);
    

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
                if (botonDelMouseApretado->position.x>matriz.getOffsetX() && botonDelMouseApretado->position.x <= matriz.getOffsetX() + matriz.getDimensionesX()  &&
                    botonDelMouseApretado->position.y>matriz.getOffsetY() && botonDelMouseApretado->position.y <= matriz.getOffsetY() + matriz.getDimensionesY()  ) {
                    if (botonDelMouseApretado->button == sf::Mouse::Button::Left) {
                        //TODO deshardcodear, q dentro de la matriz sepa donde empieza la cuadricula del juego
                        int numeroDeCeldaX = (botonDelMouseApretado->position.x - matriz.getOffsetX()) / tamañanoCuadrado;/* +0  por q en este caso hardcodeado la cuadricula empieza ahi*/
                        int numeroDeCeldaY = (botonDelMouseApretado->position.y - matriz.getOffsetY()) / tamañanoCuadrado;

                        if (estadoDeLaPartida == EstadoDeLaPartida::NOEMPEZADA) {
                            matriz.distribuirBombas(numeroDeCeldaX, numeroDeCeldaY);
                            estadoDeLaPartida = EstadoDeLaPartida::EMPEZADA;
                        }
                        else if (estadoDeLaPartida == EstadoDeLaPartida::PERDIDA || estadoDeLaPartida == EstadoDeLaPartida::GANADA) {                          
                            reiniciarPartida(estadoDeLaPartida, matriz);
                            break;
                        }

                        if (matriz.revelarCeldas(numeroDeCeldaX, numeroDeCeldaY)) {
                            estadoDeLaPartida = EstadoDeLaPartida::PERDIDA;


                        } //si retorna 0 siga 
                    }
                    if (botonDelMouseApretado->button == sf::Mouse::Button::Right) {
                        int numeroDeCeldaX = (botonDelMouseApretado->position.x - matriz.getOffsetX()) / tamañanoCuadrado;/* +0  por q en este caso hardcodeado la cuadricula empieza ahi*///TODO
                        int numeroDeCeldaY = (botonDelMouseApretado->position.y - matriz.getOffsetY()) / tamañanoCuadrado;

                        if (matriz.clickDerecho(numeroDeCeldaX, numeroDeCeldaY)) {
                            estadoDeLaPartida = EstadoDeLaPartida::PERDIDA;

                        }



                    }
                }   
                else if (botonDelMouseApretado->position.x > dibujador.getPosicionCarita().x && botonDelMouseApretado->position.x <= dibujador.getPosicionCarita().x+tamañoCarita  &&
                     botonDelMouseApretado->position.y > dibujador.getPosicionCarita().y && botonDelMouseApretado->position.y <= dibujador.getPosicionCarita().y + tamañoCarita) {
                    reiniciarPartida(estadoDeLaPartida, matriz);
                }
            }


        }
        //esto hay q meterlo en alguna funcion
        if (estadoDeLaPartida == EstadoDeLaPartida::PERDIDA) {
            matriz.revelarTodo();
        }
        if (estadoDeLaPartida==EstadoDeLaPartida::EMPEZADA &&(!matriz.getBombasNoMarcadas() || matriz.getCeldasSinRevelar() <= matriz.getCantidadDeBombas())) {
            std::cout << "Ganaste" << std::endl;
            estadoDeLaPartida = EstadoDeLaPartida::GANADA;
        }





        window.clear();
        
        dibujador.dibujarFondo(window);
        dibujador.dibujarMatriz(matriz, window);
        dibujador.dibujarCarita(estadoDeLaPartida, window);
        dibujador.dibujarContadorBombas(matriz.getBanderasFaltantes(), window);

        window.display();
    }
}




















void reiniciarPartida(EstadoDeLaPartida& estado, MatrizDelJuego& matriz) {
    matriz = MatrizDelJuego();
    estado = EstadoDeLaPartida::NOEMPEZADA;
}