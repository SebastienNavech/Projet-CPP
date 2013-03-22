#ifndef PERSONNE_H
#define PERSONNE_H
#include "Monde.h"
#include "Mobile.h"
#include "Position.h"
#include <string>


class Personne : public Element,public Mobile
{
    private:
    int sexe;

    public:
        Personne(int,string,Monde *);
        virtual ~Personne();

};

#endif // PERSONNE_H
