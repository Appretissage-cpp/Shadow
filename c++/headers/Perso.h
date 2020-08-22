#ifndef DEF_PERSO
#define DEF_PERSO

#include <string>

// Encapsulation : tous les attributs d'une classe doivent toujours être privés.
class Perso
{
    // Tout ce qui suit est public (accessible depuis l'extérieur)
    public:

    void recevoirDegats(int nbDegats);
    void attaquer(Perso &cible);
    void boirePotDeVie(int quantitePot);
    void changerArme(std::string nomNewArme, int degatsNewArme);
    bool isAlive();

    // Tout ce qui suit est privé (inaccessible depuis l'extérieur)
    private:

    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettre: std:: devant string
    int m_degatsArme;

    // m signifie "membre". Cela indique une variable (attribut) et permet de bien
    // différencier les attributs des variables « classiques » (contenues dans des fonctions par exemple).
};

#endif