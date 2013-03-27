#include "Ressource.h"

Ressource::Ressource() : Element();
{
    //ctor
    quantite = rand() % RESSOURCEMAX - RESSOURCEMIN;
}

Ressource::Ressource(string pNom,Position pPos) : Element(pNom,pPos)
{
    quantite = rand() % RESSOURCEMAX - RESSOURCEMIN;
}

Ressource::~Ressource()
{
    //dtor
    delete this;
}

int Ressource::getQuantite(int pQ)
{
    return quantite;
}
