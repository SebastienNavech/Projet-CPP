#ifndef MOBILE_H_INCLUDED
#define MOBILE_H_INCLUDED
#include "Monde.h"
using namespace std;

class Mobile : public virtual Element
{
    private:
        typedef enum{NORD, NORDEST, SUDEST, SUD, SUDOUEST, NORDOUEST} direction;
        /*int vitesse;
        int vue;
        int force;
        int vie;
        int age;
        int esperance;
        Monde *mde;*/

    public:

        //Mobile(string,Position,int,Monde &); // PROBLEME ICI
        bool verifPositionN(Position);
        bool verifPositionNE(Position);
        bool verifPositionSE(Position);
        bool verifPositionS(Position);
        bool verifPositionSO(Position);
        bool verifPositionNO(Position);
        void seDeplacer();


};
#endif // MOBILE_H_INCLUDED
