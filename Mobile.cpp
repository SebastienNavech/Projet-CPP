#include "Mobile.h"

// REVOIR CE CONSTRUCTEUR DE MERDEUUUUH
Mobile :: Mobile(string _nom,Position _pos,int _age,Monde & _monde) : Element(_nom,_pos)
{
    vitesse = rand() % VITESSE_MAX + VITESSE_MIN;
    vue = rand() % VUE_MAX + VUE_MIN;
    force = rand() % FORCE_MAX + FORCE_MIN;
    vie = rand() % VIE_MAX + VIE_MIN;
    esperance = rand() % ESPERANCE_MAX + ESPERANCE_MIN;
    age = _age;
    mde = &_monde;

}






/*
    Les méthodes suivantes permettent de vérifier si les cases adjacentes à celle fournie sont occupées
    Retourne : true si case libre
               false si case occupée
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
