#include <iostream>
#include <fstream>
#include <string>
#include "Arme.h"

using namespace std;


//constructeurs
Arme::Arme():nom("Poing"),degats(1)
{}

Arme::Arme(std::string nom, int degats): nom(nom), degats(degats)
{}

void Arme::changer(std:: string nomNouvelleArme, int degatsNouvelleArme)
{
  nom=nomNouvelleArme;
  degats=degatsNouvelleArme;
}

void Arme::afficher() const
{
  cout<< "Arme : " << nom << " et dégats : " << degats << endl;
}

int Arme::getDegats() const
{
return degats;
}

std::string Arme::getNom() const
{
return nom;
}
