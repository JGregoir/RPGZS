#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <fstream>
#include <string>
#include "Arme.h"

class Personnage
{
  private:
    int vie;
    int mana;
    std::string nom;
    Arme arme;

  public:
    Personnage();
    Personnage(std::string nom);
    Personnage(std::string nom,std::string nomArme, int degatsArme);
    Personnage(std::string nom,Personnage const& autre);
    ~Personnage();


    void recDegats(int nDegats);
    void attaquer(Personnage &cible);
    void boirePopoVie(int nPopo);
    void boirePopoMana(int nPopo);
    void changerArme(std::string nomNouvelleArme, \
                      int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat() const;
};
#endif
