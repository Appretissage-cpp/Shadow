#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string const nomFichier("C:\\Users\\ech17\\Desktop\\c++\\test.txt");
    ofstream monFlux(nomFichier.c_str()); 
    //Déclaration d'un flux permettant d'écrire dans le fichier --> C:\Users\ech17\Desktop\c++\\test.txt
    
    if(monFlux) { // On teste pour voir si il y'a des erreurs
        monFlux << "1ère phr : permet le test !" << endl;
        monFlux << 86.547564 << endl;
        int age(17);
        monFlux << "J'ai " << age << " ans !" << endl;
        int a(0);
        cout << "valeur de a :" << endl;
        cin >> a;
        monFlux << a << endl;
        cout << nomFichier << " was created !" << endl;
        // Si tout est bon, on peut use le fichier
    } 
    else {
        cout << "Error: Impossible to open this file !" << endl;
    }

    ifstream fichier(nomFichier.c_str()); // Ouverture d'un fichier (pour le lire)

    if(fichier) {
        //Tout est prêt pour la lecture.
        string ligne; //Une variable pour stocker les lignes lues

        while(getline(fichier, ligne)) { //Tant qu'on n'est pas à la fin, on lit
            cout << ligne << endl;  
            //Et on l'affiche dans la console
            //Ou alors on fait quelque chose avec cette ligne
            //À vous de voir
        }
    }
    else {
        cout << "Error: Impossible to open this file to read it !" << endl;
    }
    
    int pos = fichier.tellg();
    cout << "Nous sommes a la position (en caracteres): " << pos << endl;

    fichier.seekg(0, ios::end); //On se déplace à la fin du fichier
    
    int taille;
    taille = fichier.tellg(); //On récupère la position qui correspond donc a la taille du fichier !
    cout << "Taille du fichier : " << taille << " octets." << endl;

    return 0;
}

/* Lire ligne par ligne: 
    string ligne;
    getline(monFlux, ligne); -- > On lit une ligne complète

* Lire mot à mot:
    double nombre;
    monFlux >> nombre; --> Lit un nombre à virgule depuis le fichier
    string mot;
    monFlux >> mot; --> Lit un mot depuis le fichier

* Lire caractère par caractère:
    char a;
    monFlux.get(a); 
*/