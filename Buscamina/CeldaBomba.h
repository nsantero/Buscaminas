#pragma once
#include "Celda.h"
class CeldaBomba :
    public Celda
{
private:
public:
    CeldaBomba(int x, int y, const sf::Texture& sprite);

    int revelar() override;
    int ponerBandera() override;
    void numeralIncremento(int suma) override;
};

