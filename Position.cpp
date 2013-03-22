
#include "Position.h"

Position::Position()
{
    posX = 0;
    posY = 0;
}

Position::Position(int _posX, int _posY)
{
    posX = _posX;
    posY = _posY;
}

int Position::getPosX() const
{
    return(posX);
}

int Position::getPosY() const
{
    return(posY);
}

bool Position:: operator < (const Position & pos) const
{
    bool inferieur;

    if(pos.getPosY()<this->getPosY())
    {
        inferieur = true;
    }
    else
    {
        if(pos.getPosY() == this->getPosY())
        {
            if(pos.getPosX()<this->getPosX())
            {
                inferieur = true;
            }
            else
            {
                inferieur = false;
            }
        }
        else
        {
            inferieur = false;
        }
    }
    return inferieur;
}
