#ifndef MONDE_H_INCLUDED
#define MONDE_H_INCLUDED
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <map>
#include "Position.h"
#include "constantes.h"

using namespace std;

class Element;

class Monde : public vector<Element*>
{
    private:
    map<Position,unsigned int> monMonde;

    public:
    Monde();
    Element * getElement(unsigned int);
    Position & randPos();
    map<Position,unsigned int> & getMap();

};

class Element{

    private:

    string nom;
    Position pos;
    Monde * earth;

    public:

    //constructeurs et destructeur
    Element();
    Element(string, Position);
    virtual ~Element();

    // setteurs
    void setNom(string);
    void setMonde(Monde*);

    //getteurs
    string getnom() const;
    int getPosXEl()const;
    int getPosYEl()const;
    Monde* getMonde() const;
    virtual void agir();

};

#endif // MONDE_H_INCLUDED
