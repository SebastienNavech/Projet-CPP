#ifndef MONDE_H_INCLUDED
#define MONDE_H_INCLUDED
#include <string>
#include <vector>
#include <map>
#include "Position.h"

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
    //constructeurs
    Element();
    Element(const string& ,const Position& );
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
