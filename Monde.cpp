#include <vector>
#include "Monde.h"
#include "constantes.h"

//template <Element*>

/*
faire une position aléatoire dans le monde
réfléchir à une méthode "agir" (déplacer)
*/
Monde::Monde()
{
    int i;

    Position pPos(2,2);
    Element* e = new Element("toto",pPos);
    push_back(e);
    monMonde.insert(pair<Position,unsigned int>(pPos,size()-1)); // ça déconne !!!!!!!
    /*
    for(int i=0;i<6;i++)
    {
        push_back(new Element()); // a changer

    }
    */
    ///////////// PLACEMENT DE TOUS LES ELEMENTS DANS LE MONDE \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
    for(i=0;i<NB_GAULOIS_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Gaulois" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
    }
    for(i=0;i<NB_GAULOISES_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Gauloise" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
    }
    for(i=0;i<NB_SANGLIERS_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Sanglier" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
    }
    for(i=0;i<NB_ARBRES_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Arbre" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
    }
}


Element * Monde::getElement(unsigned int i)
{
    return at(i);
}

Position & Monde::randPos()
{
    srand((time(NULL)));
    Position* posRand = new Position();
    bool posValid=false;
    while(posValid ==false)
    {
        int x,y;
        while((x%2) != (y%2))
        {
        x = rand() % LARGEUR_CARTE ;
        y = rand() % HAUTEUR_CARTE;
        }

        posRand = new Position(x,y);
        if(monMonde.end() == monMonde.find(*posRand))
            posValid = true;
    }
    return *posRand;
}

map<Position,unsigned int> & Monde::getMap()
{
    return monMonde;
}
