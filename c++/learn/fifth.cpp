#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* fontion qui ajoute 3
int ajouteTrois(int nombreRecu) {
    int valeur(nombreRecu + 3);

    return valeur;
} */
 
//passage par valeur

int ajouteTrois(int c) {
    c+=3;
    return c;
} 

int main() {
    
    int a(2), b(4), resultat, resultatT;
    resultat = ajouteTrois(a);
    resultatT = ajouteTrois(b);
    
    cout << "Le nombre original de a vaut : " << a << endl;
    cout << "Le nombre original de b vaut : " << b << endl;

    cout << "Le resultat de a vaut : " << resultat << endl;
    cout << "Le resultat de b vaut : " << resultatT << endl;

    return 0;
} 

//fonction qui renvoie rien

/* void hi()
{
    cout << "hi !" << endl;
    //Comme rien ne ressort, il n'y a pas de return !
}

int main()
{
    hi();
    //Comme la fonction ne renvoie rien
    //On l'appelle sans mettre la valeur de retour dans une variable
    
    return 0;
} */
