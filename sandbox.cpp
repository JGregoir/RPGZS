#include <iostream>
#include <fstream>
#include <string>
#include "Personnage.h"

using namespace std;



int main()
{

  cout << "Let's play a game with characters!\n";

  Personnage david("David"), goliath("Goliath","gourdin", 7);
      //Création de 2 objets de type Personnage : david et goliath

  goliath.attaquer(david);    //goliath attaque david
  david.boirePopoVie(20);     //david récupère 20 de vie en buvant une potion
  goliath.attaquer(david);    //goliath réattaque david
  david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?

  goliath.changerArme("gourdin", 40);
  goliath.attaquer(david);
  david.changerArme("Poesie",714);
  david.attaquer(goliath);
  //Temps mort ! Voyons voir la vie de chacun…
  david.afficherEtat();
  goliath.afficherEtat();

  Personnage michael("Michael",david);

  //cout << endl << "Michael" << endl;
  michael.afficherEtat();
  return 0;
}
