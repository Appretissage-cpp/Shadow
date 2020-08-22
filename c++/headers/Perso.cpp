#include "Perso.h"

using namespace std;

//Méthodes
void Perso::recevoirDegats(int nbDegats) {

    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage
    
    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

void Perso::attaquer(Perso &cible) {

    cible.recevoirDegats(m_degatsArme);
    //On inflige à la cible les dégâts que cause notre arme
}
    
void Perso::boirePotDeVie(int quantitePot) {

    m_vie += quantitePot;

    if (m_vie > 100) //Interdiction de dépasser 100 de vie
    {
        m_vie = 100;
    }
}
    
void Perso::changerArme(string nomNewArme, int degatsNewArme) {

    m_nomArme = nomNewArme;
    m_degatsArme = degatsNewArme;
}
    
bool Perso::isAlive() {

    return m_vie > 0; //Renvoie true si m_vie > 0 et false sinon.
}