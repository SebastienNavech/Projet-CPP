#include "Mobile.h"

// REVOIR CE CONSTRUCTEUR DE MERDEUUUUH
/*
Mobile :: Mobile(string _nom,Position _pos,int _age,Monde & _monde) : Element(_nom,_pos)
{
    vitesse = rand() % VITESSE_MAX + VITESSE_MIN;
    vue = rand() % VUE_MAX + VUE_MIN;
    force = rand() % FORCE_MAX + FORCE_MIN;
    vie = rand() % VIE_MAX + VIE_MIN;
    esperance = rand() % ESPERANCE_MAX + ESPERANCE_MIN;
    age = _age;
    mde = &_monde;

} */






/*
    Les méthodes suivantes permettent de vérifier si les cases adjacentes à celle fournie sont occupées
    Retourne : true si case libre
               false si case occupée
*/
bool Mobile::verifPositionN(Position pPos)
{
   if(pPos.getPosX()== HAUTEUR_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool Mobile::verifPositionNE(Position pPos)
{
    if(pPos.getPosX() == LARGEUR_CARTE || pPos.getPosY() == HAUTEUR_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool Mobile::verifPositionSE(Position pPos)
{
    if(pPos.getPosX() == LARGEUR_CARTE || pPos.getPosY() == SUD_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool Mobile::verifPositionS(Position pPos)
{
    if(pPos.getPosY() == SUD_CARTE) //OU POSITION OCCUPEE
    {
        return false;
    }
    return true;
}


bool Mobile::verifPositionSO(Position pPos)
{
    if(pPos.getPosY() == OUEST_CARTE + 1 || pPos.getPosX() == SUD_CARTE)
    {
        return false;
    }
    return true;
}


bool Mobile::verifPositionNO(Position pPos)
{
    if(pPos.getPosX() == OUEST_CARTE || pPos.getPosY() == NORD_CARTE - 1)
    {
        return false;
    }
    return true;
}


void Mobile::seDeplacer()
{
    int x=rand() % 6;
    Position* datPos = new Position(this->getPosXEl(), this->getPosYEl());

    if(x==1)
    {
        if(verifPositionN(*datPos)==true)
        {
            datPos->setPosY(datPos->getPosY()+2);
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==2)
    {
        if(verifPositionNE(*datPos)==true)
        {
            datPos->setPosY(datPos->getPosY()+1);
            datPos->setPosX(datPos->getPosX()+1);
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==3)
    {
        if(verifPositionSE(*datPos)==true)
        {
            datPos->setPosY(datPos->getPosY()-1);
            datPos->setPosX(datPos->getPosX()+1);
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==4)
    {
        if(verifPositionS(*datPos)==true)
        {
            datPos->setPosX(datPos->getPosX()-2);
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==5)
    {
        if(verifPositionSO(*datPos)==true)
        {
            datPos->setPosX(datPos->getPosX()-1);
            datPos->setPosY(datPos->getPosY()-1);
        }
        else
        {
            this->seDeplacer();
        }
    }
    if(x==6)
    {
        if(verifPositionSO(*datPos)==true)
        {
            datPos->setPosX(datPos->getPosY()+1);
            datPos->setPosX(datPos->getPosX()-1);
        }
        else
        {
            this->seDeplacer();
        }
    }
}
