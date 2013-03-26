#include "Personne.h"

Personne::Personne(int pSexe,string pNom,Monde * pMonde)
{

    this->sexe = pSexe;
    this->setNom(pNom);
    this->getMonde()->randPos();
}

Personne::~Personne()
{
    //dtor
}
