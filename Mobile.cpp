#include <vector>
#include "Monde.h"
#include "constantes.h"
#include "position.h"

/*
    Les m�thodes suivantes permettent de v�rifier si les cases adjacentes � celle fournie sont occup�es
    Retourne : true si case libre
               false si case occup�e
*/
bool verifPositionN(Position pPos)
{
   if(pPos.getPosX()== HAUTEUR_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool verifPositionNE(Position pPos)
{
    if(pPos.getPosX() == LARGEUR_CARTE || pPos.getPosY() == HAUTEUR_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool verifPositionSE(Position pPos)
{
    if(pPos.getPosX() == LARGEUR_CARTE || pPos.getPosY() == SUD_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool verifPositionS(Position pPos)
{
    if(pPos.getPosY() == SUD_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool verifPositionSO(Position pPos)
{
    if(pPos.getPosY() == OUEST_CARTE + 1 || pPos.getPosX() == SUD_CARTE)
    {
        return false;
    }
    return true;
}


bool verifPositionNO(Position pPos)
{
    if(pPos.getPosX() == OUEST_CARTE || pPos.getPosY() == NORD_CARTE - 1)
    {
        return false;
    }
    return true;
}
