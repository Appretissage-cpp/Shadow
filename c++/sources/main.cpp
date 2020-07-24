#include <iostream>
#include "math.cpp"
using namespace std;

int main() {
    
    int a(2), b(2);
    
    cout << "Le nombre original de a vaut : " << a << endl;
    cout << "Le nombre original de b vaut : " << b << endl;

    b = ajouteTrois(a);
    a = ajouteTrois(a);

    cout << "Le resultat de a vaut : " << a << endl;
    cout << "Le resultat de b vaut : " << b << endl;

    return 0;
} 