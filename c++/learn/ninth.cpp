#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    
    // -> Tableau statique

    int const nombreMeilleursScores(10); // Taille du Tableau
    int meilleursScores[nombreMeilleursScores]; // Déclaration du Tableau

    meilleursScores[0] = 6556;
    meilleursScores[1] = 5000;
    meilleursScores[2] = 4000;
    meilleursScores[3] = 3000;
    meilleursScores[4] = 2000;
    meilleursScores[5] = 1000;
    meilleursScores[6] = 500;
    meilleursScores[7] = 250;
    meilleursScores[8] = 150;
    meilleursScores[9] = 50;

    for(int i(0); i<nombreMeilleursScores; ++i) {
        cout << meilleursScores[i] << endl;    
    } 

    // Test plus avancé

    int const totalNotes(5);
    double notes[totalNotes];

    notes[0] = 15;
    notes[1] = 17;
    notes[2] = 12;
    notes[3] = 19;
    notes[4] = 5;

    double moyenne(0);
    for(int i(0); i<totalNotes; ++i) {
        moyenne += notes[i];  //On additionne toutes les notes
    }

    moyenne /= totalNotes;

    cout << "Moyenne des 5 notes : " << moyenne << endl;
    
    
    // -> Tableaux Dynamiques
    
    /*
     - vector<int> test(5, 4); //Crée un tableau de 5 entiers valant tous 4
     - vector<string> listeNoms(12, "Sans nom"); //Crée un tableau de 12 strings valant toutes « Sans nom »  
     - vector<double> testDeux; //Crée un tableau de 0 nombre à virgule
    */
    
    
    int const nbMeilleursScores(5); 
    vector<int> bestScores(nbMeilleursScores);

    bestScores[0] = 10;
    bestScores[1] = 8;
    bestScores[2] = 7;
    bestScores[3] = 5;
    bestScores[4] = 2;

    vector<int> tab(7, 3); //Crée un tableau de 7 entiers valant tous 3
    int const taille(tab.size()); //La taille peut varier mais la valeur de cette variable ne changera pas. On utilise donc une constante
    tab.push_back(9); //On ajoute une 4ème case au tableau qui contient la valeur 9
    tab.push_back(7); //On ajoute une 5ème case au tableau qui contient la valeur 7
    tab.pop_back(); // Enleve la dernière case donc la 5ème ayant la valeur 7

    cout << taille << endl;
    

    vector<int> total(2, 15);
    int const tall(total.size());
    total.push_back(6);
    total.push_back(17);
    total.push_back(16);

    double moy(0);
    for(int i(0); i<total.size(); ++i) { //On utilise notes.size() pour la limite de notre boucle
        moy += total[i];
    }
    moy /= total.size();  //On utilise à nouveau notes.size() pour obtenir le nombre de notes

    cout << "Votre moyenne est de : " << moy << endl;
    
    // Les chaînes de caractères string peuvent être considérées comme des tableaux. Chacune des cases correspond à un caractère.
    string prenom("Rouroux");
    cout << "Vous etes " << prenom << "." <<endl;

    prenom[0] = 'L';  //On modifie la première lettre
    prenom[2] = 'c';  //On modifie la troisième lettre

    cout << "Ah non, vous etes " << prenom << "!" << endl;
    cout << "ce nom contient " << prenom.size() << " caracteres !" << endl;
    
    string nom("LeRoux");
    string tot;    //Une chaîne vide
    tot += prenom; //On ajoute le prénom à la chaîne vide
    tot += " ";    //Puis un espace
    tot += nom;    //Et finalement le nom de famille

    cout << "Vous vous appelez " << tot << "." << endl;
    
    return 0;
}
    
    /* Les vector et les fonctions
        
        -> void fonction(vector<int> const& a) {} 
        -> vector<int> tableau(5,2);
           fonction(tableau); On passe le tableau à la fonction déclarée au-dessus
    
       Déclaration d'un tableau multi-dimensionnel

            int tbl[5][5];
            int const tailleX(5);
            int const tailleY(5);
            int tbll[tailleX][tailleY];
            vector<vector<int> > grille;
            grille.push_back(vector<int>(5)); //On ajoute une ligne de 5 cases à notre grille
            grille.push_back(vector<int>(3,4)); //On ajoute une ligne de 3 cases contenant chacune le nombre 4 à notre grille
            grille[0].push_back(8); //Ajoute une case contenant 8 à la première ligne du tableau
            grille[2][3] = 9;     //Change la valeur de la cellule (2,3) de la grille
    
    */