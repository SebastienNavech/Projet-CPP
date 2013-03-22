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
    Position pPos(2,2);
    Element* e = new Element("toto",pPos);
    push_back(e);
    monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));
    /*
    for(int i=0;i<6;i++)
    {
        push_back(new Element()); // a changer

    }
    */
}


Element * Monde::getElement(unsigned int i)
{
    return at(i);
}

Position & Monde::randPos()
{
    Position* posRand = new Position();
    bool posValid=false;
    while(posValid ==false)
    {
        int x,y;
        while((x%2) != (y%2))
        {
        x = rand()% LARGEUR_CARTE ; // changer 25 par une constante largeurMonde
        y = rand()% HAUTEUR_CARTE; // changer 25 par une constante HauteurMonde
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
