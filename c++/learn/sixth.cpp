#include <iostream>
#include <string>
#include <cmath>
using namespace std;


double sqrt(double x) {
    double nombre;
    nombre = x*x-1;
    return nombre;
}

/* int main() {
    
    double nombre, numberN;
    cout << "Enter a number: ";
    cin >> nombre;

    numberN = number(nombre); //utilisation de la fonction

    cout << " The sqrt of " << nombre << " is " << numberN << endl;

    for(int i(1); i<=20; i++) {
        cout << " The sqrt of (and -1) " << i << " is " << sqrt(i) << endl;
    }

    return 0;
} */

void dessineRectangle(int l, int h) {
    for(int ligne(0); ligne < h ; ligne++) {
        for(int colonne(0); colonne < l; colonne++) {
            cout << "-";
        }

        cout << endl;
    }
}

int main() {
    int largeur, hauteur;
    cout << "Largeur du rectangle: ";
    cin >> largeur;
    cout << "Hauteur du rectangle: ";
    cin >> hauteur;

    dessineRectangle(largeur, hauteur);
    return 0;
}