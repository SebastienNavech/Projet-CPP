#include "Monde.h"
#include "constantes.h"

//template <Element*>

Monde::Monde() : vector<Element*>(),monMonde()
{
    unsigned int i;
    Position pPos(2,2);
    Element* e = new Element("toto",pPos);
    push_back(e);
    monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));

    /* PLACEMENT DE TOUS LES ELEMENTS DANS LE MONDE */

    for(i=0;i<NB_GAULOIS_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Gaulois" + (i+1) ;
        Element* e = new Element(nom, pPos);
        push_back(e);
        monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));
        cout << "Gaulois cree avec comme position : ( " << pPos.getPosX() << " , " <<pPos.getPosY() << " )" << endl;

    }

    for(i=0;i<NB_GAULOISES_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Gauloise" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
        monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));
        cout << "Gauloise creee avec comme position : ( " << pPos.getPosX() << " , " <<pPos.getPosY() << " )" << endl;
    }

    for(i=0;i<NB_SANGLIERS_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Sanglier" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
        monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));
        cout << "Sanglier cree avec comme position : ( " << pPos.getPosX() << " , " <<pPos.getPosY() << " )" << endl;
    }

    for(i=0;i<NB_ARBRES_DEPART;i++)
    {
        Position pPos = this->randPos();
        string nom = "Arbre" + (i+1);
        Element* e = new Element(nom, pPos);
        push_back(e);
        monMonde.insert(pair<Position,unsigned int>(pPos,size()-1));
        cout << "Arbre cree avec comme position : ( " << pPos.getPosX() << " , " <<pPos.getPosY() << " )" << endl;
    }

}


Element * Monde::getElement(unsigned int i)
{
    return at(i);
}

bool Monde::caseVide(int x, int y){ return(monMonde.end() == monMonde.find(Position(x, y))); }

Position Monde::randPos()
{
    srand((time(NULL)));
    int x = -1, y = -1;
    while((!Position::positionCorrecte(x, y))||(!caseVide(x, y))){
        x = rand() % HAUTEUR_CARTE ;
        y = rand() % LARGEUR_CARTE ;
    }
    return Position(x,y);
}

map<Position,unsigned int> & Monde::getMap()
{
    return monMonde;
}

void Monde::afficher()
{
    //map<Position, unsigned int>::iterator it = monMonde.begin();
    unsigned int i;
    for(i=0;i<monMonde.size();i++)
    {
        this->getElement(i)->afficherQqch();
    }
}
