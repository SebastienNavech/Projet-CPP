#ifndef RESSOURCE_H
#define RESSOURCE_H
#include "Monde.h"

using namespace std;

class Ressource : public virtual Element
{
    private:
    int quantite;

    public:
        Ressource();
        Ressource(string, Position);
        virtual ~Ressource();
        int getQuantite() const;
    // sûrement : virtual void agir() ....
};

#endif // RESSOURCE_H
