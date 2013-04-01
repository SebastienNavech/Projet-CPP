#include "Monde.h"
#include "Position.h"

Element::Element(){}

Element::Element(string _s, Position _p) : pos(_p){nom=_s;}

Element::~Element(){delete this;}



string Element::getnom() const{
    return nom;
}

void Element::setNom(string _n){
    nom=_n;
}

int Element::getPosXEl()const{
    return pos.getPosX();
}

int Element::getPosYEl()const{
    return pos.getPosY();
}

void Element::setMonde(Monde* _m)
{
    earth = _m;
}

Monde* Element::getMonde() const
{
    return earth;
}

void Element::afficherQqch()
{
    cout << "Je suis " << this->getnom() << "  POSITION (" << this->getPosXEl() << ", " << this->getPosYEl() << ")" <<endl;
}

void Element::agir(){}

bool Element::verifPositionN(Position pPos)
{
   if(pPos.getPosX()== HAUTEUR_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool Element::verifPositionNE(Position pPos)
{
    if(pPos.getPosX() == LARGEUR_CARTE || pPos.getPosY() == HAUTEUR_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool Element::verifPositionSE(Position pPos)
{
    if(pPos.getPosX() == LARGEUR_CARTE || pPos.getPosY() == SUD_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool Element::verifPositionS(Position pPos)
{
    if(pPos.getPosY() == SUD_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool Element::verifPositionSO(Position pPos)
{
    if(pPos.getPosY() == OUEST_CARTE + 1 || pPos.getPosX() == SUD_CARTE)
    {
        return false;
    }
    return true;
}


bool Element::verifPositionNO(Position pPos)
{
    if(pPos.getPosX() == OUEST_CARTE || pPos.getPosY() == NORD_CARTE - 1)
    {
        return false;
    }
    return true;
}


void Element::seDeplacer()
{
    srand((time(NULL)));
    int x=rand()%5 + 1;

    //int x= rand() % 6;
    Position* datPos = new Position(this->getPosXEl(), this->getPosYEl());

    if(x==1)
    {
        if(verifPositionN(*datPos)==true)
        {
            datPos->setPosY(datPos->getPosY()+2);

    this->setPosY(datPos->getPosY());
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==2)
    {
        if(verifPositionNE(*datPos)==true)
        {
            datPos->setPosY(datPos->getPosY()+1);
            datPos->setPosX(datPos->getPosX()+1);
            this->setPosX(datPos->getPosX());
    this->setPosY(datPos->getPosY());
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==3)
    {
        if(verifPositionSE(*datPos)==true)
        {
            datPos->setPosY(datPos->getPosY()-1);
            datPos->setPosX(datPos->getPosX()+1);
            this->setPosX(datPos->getPosX());
    this->setPosY(datPos->getPosY());
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==4)
    {
        if(verifPositionS(*datPos)==true)
        {
            datPos->setPosX(datPos->getPosX()-2);
            this->setPosX(datPos->getPosX());
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==5)
    {
        if(verifPositionSO(*datPos)==true)
        {
            datPos->setPosX(datPos->getPosX()-1);
            datPos->setPosY(datPos->getPosY()-1);
            this->setPosX(datPos->getPosX());
    this->setPosY(datPos->getPosY());
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==6)
    {
        if(verifPositionSO(*datPos)==true)
        {
            datPos->setPosX(datPos->getPosY()+1);
            datPos->setPosX(datPos->getPosX()-1);
            this->setPosX(datPos->getPosX());
    this->setPosY(datPos->getPosY());
        }
        else
        {
            this->seDeplacer();
        }
    }

}

void Element::setPosX(int _posX) {this->pos.setPosX(_posX);}
void Element::setPosY(int _posY) {this->pos.setPosY(_posY);}
