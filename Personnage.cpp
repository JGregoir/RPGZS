#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

//constructeurs

  Personnage::Personnage():nom("Rêve"),vie(100),mana(250)
  {
  }

  Personnage::Personnage(string nom):nom(nom),vie(100),mana(85)
  {
  }

  Personnage::Personnage(string nom, Personnage const& autre): \
  nom(nom),vie(600), mana(autre.mana), arme(autre.arme.getNom(), autre.arme.getDegats())
  {
  }

  Personnage::Personnage(string nom, string nomArme, int degatsArme) : \
  nom(nom),vie(100), mana(666), arme(nomArme, degatsArme)
  {

  }
  Personnage::~Personnage()
  {
  }

  void Personnage::recDegats(int nDegats)
  {
    vie -= nDegats;
    cout << "T.T... : "<< nom << " subit " << nDegats << " dégats" << endl;
  }

  void Personnage::attaquer(Personnage &cible)
  {
    cout << ">.<!!! : "<< nom << " attaque " << cible.nom << " qui reçoit " << arme.getDegats() << " dégats" << endl;
    cible.recDegats(arme.getDegats());
  }

  void Personnage::boirePopoVie(int nPopo)
  {
    vie += nPopo;
    cout << "(x.^)  : " << nom << " récupère " << nPopo << " points de vie avec une popo" << endl;
  }

  void Personnage::boirePopoMana(int nPopo)
  {
    mana += nPopo;
    cout << "(x.o)  : " << nom << " récupère " << nPopo << " points de mana avec une popo" << endl;
  }

  void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
  {
    arme.changer(nomNouvelleArme, degatsNouvelleArme);
    cout << " x--> : "<< nom << " récupère l'arme " << nomNouvelleArme << endl;
  }

  bool Personnage::estVivant() const
  {
    return vie > 0;
  }

  void Personnage::afficherEtat() const
{
    cout << nom<< endl;
    cout << "Vie : " << vie << endl;
    cout << "Mana : " << mana << endl;
    arme.afficher();
}
