#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Passage par référence

void echange(double& a, double& b)
{
    double temporaire(a); //On sauvegarde la valeur de 'a'
    a = b;                //On remplace la valeur de 'a' par celle de 'b'
    b = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b'
}

int main()
{
    double a(2), b(5);

    cout << "a vaut " << a << " et b vaut " << b << endl;

    echange(a, b);   //On utilise la fonction

    cout << "a vaut " << a << " et b vaut " << b << endl;
    return 0;
}

/* 

>> Le passage par référence
void f1(string texte);  -> Implique une copie coûteuse de 'texte' 
{
}

void f2(string& texte);  -> Implique que la fonction peut modifier 'texte' 
{
}

>> Le passage par référence constante

void f1(string const& texte);  -> Pas de copie et pas de modification possible
{
} 
*/