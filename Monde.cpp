#include <vector>
#include "Monde.h"
#include "constantes.h"

//template <Element*>

Monde::Monde() : vector<Element*>(),monMonde()
{
    int i;

    Position pPos(2,2);
    Element* e = new Element("toto",pPos);
    push_back(e);
    monMonde.insert(pair<Position,unsigned int>(pPos,size()-1)); // ça déconne !!!!!!!

    /* PLACEMENT DE TOUS LES ELEMENTS DANS LE MONDE */
    /*
    for(i=0;i<NB_GAULOIS_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Gaulois" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
        monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));
    }
    for(i=0;i<NB_GAULOISES_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Gauloise" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
        monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));
    }
    for(i=0;i<NB_SANGLIERS_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Sanglier" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
        monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));
    }

    for(i=0;i<NB_ARBRES_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Arbre" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
        monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));
    }
    */
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

void Monde::afficher()
{
    map<Position, unsigned int>::iterator it = monMonde.begin();
    unsigned int i;
    for(i=0;i<monMonde.size();i++)
    {

    }
}
