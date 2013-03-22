#include <vector>
#include "Monde.h"
#include "constantes.h"
#include "position.h"

/*
    Les méthodes suivantes permettent de vérifier si les cases adjacentes à celle fournie sont occupées
    Retourne : true si case libre
               false si case occupée
*/
bool verifPositionN(Position)
{
   if(Position.getPosX()== HAUTEUR_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool verifPositionNE(Position)
{
    if(Postion.getPosX() == LARGEUR_CARTE || Position.getPosY()= HAUTER_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool verifPositionSE(Position)
{
    if(Position.getPosX() == LARGEUR_CARTE || Position.getPosY()= BAS_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool verifPositionS(Position)
{
    if(Position.getPosY() == BAS_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool verifPositionSO(Position)
{
    if(Position.getPosY() == OUEST_CARTE + 1 || Position.getPosX() == SUD_CARTE)
    {
        return false;
    }
    return true;
}


bool verifPositionNO(Position)
{
    if(Position.getPosX() == OUEST_CARTE || Position.getPosY() == NORD_CARTE - 1)
    {
        return false;
    }
    return true;
}
