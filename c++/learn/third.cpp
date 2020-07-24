#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    
    double a(0), b(0), end(0);
    cout << "Choisi tes chiffres pour le calcul (2) " << endl;

    cout << "valeur de a" << endl;
    cin >> a;

    cout << "valeur de b" << endl;
    cin >> b;

    double const finish(a + b - a * b);

    cout << a << " + " << b << " - " << a << " * " << b << " = " << finish << endl;

    double ptsDeVie(10);

    ptsDeVie += 3.14;       
    ptsDeVie *= 2.1;        
    ptsDeVie -= 5;    
    ptsDeVie /= 2; 
    cout << ptsDeVie << endl;

    double result;
    result = exp(ptsDeVie); //fonction exp + 
    //double const resultat = pow(a,b); = puissance
    cout << result << endl; 

    double c(0), d(0);
    cout << "Choisi tes chiffres pour le calcul (2) " << endl;

    cout << "valeur de c" << endl;
    cin >> c;

    cout << "valeur de d" << endl;
    cin >> d;
    
    double resultat = pow(a,b);
    cout << c << " ^ " << d << " = " << resultat << endl;

    return 0;
}