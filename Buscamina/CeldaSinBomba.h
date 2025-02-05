#pragma once
#include "Celda.h"


class CeldaSinBomba :
    public Celda
{
protected:

    int numeral{0};

    
public:
    CeldaSinBomba(int x, int y, const sf::Texture& sprite);

    int revelar() override;
    int ponerBandera() override;

    int getNumeral();
    void setNumeral(int nuevo);
    void numeralIncremento(int suma) override;
    

};

