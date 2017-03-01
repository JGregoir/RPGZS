#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
  private:
    std::string nom;
    int degats;

  public:
    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;
    std::string getNom() const;
};
#endif
