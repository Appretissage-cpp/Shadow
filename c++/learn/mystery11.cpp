#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

string melangerLettres(string mot) {
    
    string melange;
    int pos(0);
    //Tant qu'on n'a pas extrait toutes les lettres du mot
    while(mot.size() != 0) {
        //On choisit un numéro de lettre au hasard dans le mot
        pos = rand() % mot.size();
        //On ajoute la lettre dans le mot mélangé
        melange += mot[pos]; 
        //On retire cette lettre du mot mystère
        //Pour ne pas la prendre une deuxième fois
        mot.erase(pos, 1);
    }
    return melange;
}

int main() {
    
    //1 : On demande de saisir un mot

    string motMys, motMelange, motUtilisateur;
    
    //Initialisation des nombres aléatoires
    srand(time(0));

    cout << "Choisi un mot mystere" << endl;
    cin >> motMys;

    //2 : On mélange les lettres du mot

    motMelange = melangerLettres(motMys);

    //3 : On demande à l'utilisateur quel est le mot mystère

    do {
        cout << endl << "Quel est ce mot ? " << motMelange << endl;
        cin >> motUtilisateur;

        if(motUtilisateur == motMys) {
            cout << "Bravo !" << endl;
        } else {
            cout << "Ce n'est pas le mot !" << endl;
        }
    } while(motUtilisateur != motMys);
    // on recommence tant que le mot n'est pas trouver

    return 0;

}