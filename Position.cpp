#include "Position.h"

Position::Position()
{
    posX = 0;
    posY = 0;
}

Position::Position(int _posX, int _posY){

    posX = _posX;
    posY = _posY;
}

int Position::getPosX() const {return(posX);}

int Position::getPosY() const {return(posY);}

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

bool Position::operator == (const Position & pos) const
{
    bool egal=false;

    if(this->getPosX() == pos.getPosX() && this->getPosY() == pos.getPosY())
    egal = true;

    return egal;
}

bool Position::positionCorrecte(int p1,int p2)
{
    bool correct = false;

    if((p1 > 0) && (p2 > 0) && (p1 <= HAUTEUR_CARTE) && (p2 <= LARGEUR_CARTE) && ((p1 % 2) == (p2 % 2)))
        correct = true;

    return correct;
}

bool Position::positionCorrecte(Position pPos)
{
    bool correct=false;

    if((pPos.getPosX() > 0) && (pPos.getPosY() > 0) && (pPos.getPosX() <= HAUTEUR_CARTE) && (pPos.getPosY() <= LARGEUR_CARTE) && ((pPos.getPosX() % 2) == (pPos.getPosY() % 2)))
    correct = true;
    return correct;

}
