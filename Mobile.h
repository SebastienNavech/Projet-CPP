#ifndef MOBILE_H_INCLUDED
#define MOBILE_H_INCLUDED
#include "Element.h"
using namespace std;

class Mobile : public Element
{
    private:
        typedef{NORD, NORDEST, SUDEST, SUD, SUDOUEST, NORDOUEST} direction ;

    public:
        //Getters
        bool verifPositionN(Position);
        bool verifPositionNE(Position);
        bool verifPositionSE(Position);
        bool verifPositionS(Position);
        bool verifPositionSO(Position);
        bool verifPositionNO(Position);

    bool seDeplacer();
}
#endif // MOBILE_H_INCLUDED
