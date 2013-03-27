#ifndef POSITION_H
#define POSITION_H

#include <string>

using namespace std;

class Position
{
    private :
        int posX;
        int posY;

    public :
        //Constructeurs
        Position();
        Position(int, int);
        //Getters
        int getPosX() const;
        int getPosY() const;
        //Surcharge d'op�rateur
        bool operator < (const Position &) const;
        bool operator ==(const Position &) const;
};

#endif
