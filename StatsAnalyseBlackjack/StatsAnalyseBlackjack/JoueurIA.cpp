#include "JoueurIA.h"


JoueurIA::JoueurIA(int risque, JeuCarte * lejeu) :Risque_(risque), Lejeu_(lejeu)
{
}


JoueurIA::~JoueurIA()
{
}

int JoueurIA::getCompte()
{
   int compte = 0;
   for each (Carte carte in CartePiger_)
   {
      if (carte.getValue() + compte > 21)
         compte += carte.getValue(1);
      else
         compte += carte.getValue();
   }
   return compte;
}
void JoueurIA::SetCompte(int valeur)
{
   Compte_ = valeur;
}
bool JoueurIA::Jouer()
{
   




}
