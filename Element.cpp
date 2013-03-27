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

void Element::agir()
{}
