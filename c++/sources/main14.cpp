#include <iostream>
#include <cmath>
#include <string>
#include "Perso.h"
using namespace std;

int main() {

    Perso david, goliath;
    //Création de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david); //goliath attaque david
    david.boirePotDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath réattaque david
    david.attaquer(goliath); //david contre-attaque...

    goliath.changerArme("Epee en diams", 40);
    goliath.attaquer(david);

    return 0;
}