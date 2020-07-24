#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Prototype de la fonction
int nombreDeSecondes(int h, int mins = 0, int secs = 0);

// Main
int main() {
    cout << nombreDeSecondes(1, 10, 25) << endl;

    return 0;
}

// Définition de la fonction
int nombreDeSecondes(int h, int mins, int secs) {
    int total = 0;

    total = h * 60 * 60;
    total += mins * 60;
    total += secs;

    return total;
}