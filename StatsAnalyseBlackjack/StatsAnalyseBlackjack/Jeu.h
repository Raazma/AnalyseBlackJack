#pragma once
#include "JoueurIA.h"
class Jeu
{
public:
   Jeu(JoueurIA * un, JoueurIA * deux);
   ~Jeu();

private:
   JoueurIA * Un_;
   JoueurIA * Deux_;
};

