#include <iostream> 
#include <string>
#include <vector>
using namespace std;

int main() {
    
    int nbVoitures(7);
    cout << "L'adresse de cette variable est: " << &nbVoitures << endl;
    // « Affiche l'adresse de la variable nbVoitures »
    // Un pointeur est une variable qui contient l'adresse d'une autre variable.

    double *pointeurA(0);
    //Un pointeur qui peut contenir l'adresse d'un nombre à virgule

    unsigned int *pointeurB(0);
    //Un pointeur qui peut contenir l'adresse d'un nombre entier positif

    string *pointeurC(0);
    //Un pointeur qui peut contenir l'adresse d'une chaîne de caractères

    vector<int> *pointeurD(0);
    //Un pointeur qui peut contenir l'adresse d'un tableau dynamique de nombres entiers

    int const *pointeurE(0);
    //Un pointeur qui peut contenir l'adresse d'un nombre entier constant

    //Il faut toujours déclarer un pointeur en lui donnant la valeur 0 car sinon les pointeurs ne contiennent aucune adresse connue.
    
    
    int ageUser(17);
    // Une variable de type int
    int *ptr(0);
    //Un pointeur pouvant contenir l'adresse d'un nombre entier

    ptr = &ageUser;
    //On met l'adresse de 'ageUtilisateur' dans le pointeur 'ptr'

    cout << "L'adresse de 'ageUtilisateur' est : " << &ageUser << endl;
    cout << "La valeur de pointeur est : " << ptr << endl;  
    cout << "La valeur est (celle de ageUser): " << *ptr << endl;   

    int* pointeur(0);
    pointeur = new int;

    cout << "Quel age avez-vous ?";
    cin >> *pointeur; //On écrit dans la case mémoire pointée par le pointeur 'pointeur'

    cout << "Vous avez " << *pointeur << " ans." << endl; 
    //On utilise à nouveau *pointeur
    delete pointeur; //Ne pas oublier de libérer la mémoire
    pointeur = 0; //Et de faire pointer le pointeur vers rien

    string reponseA, reponseB, reponseC;
    reponseA = "Un objet cree par l'homme.";
    reponseB = "Un objet cree par l'homme pour se deplacer plus rapidement qu'a pied.";
    reponseC = "Un objet cree par la nature.";

    cout << "Qu'est-ce qu'une voiture' ? " << endl; //On pose la question
    cout << "A) " << reponseA << endl; //Et on affiche les trois propositions
    cout << "B) " << reponseB << endl;
    cout << "C) " << reponseC << endl;

    char reponse;
    cout << "Votre reponse (A, B ou C) : ";
    cin >> reponse; //On récupère la réponse de l'utilisateur

    string *reponseUtilisateur(0); //Un pointeur qui pointera sur la réponse choisie
    switch(reponse)
    {
    case 'A':
        reponseUtilisateur = &reponseA; //On déplace le pointeur sur la réponse choisie
        break;
    case 'B':
        reponseUtilisateur = &reponseB;
        break;
    case 'C':
        reponseUtilisateur = &reponseC;
        break;
    }

    //On peut alors utiliser le pointeur pour afficher la réponse choisie
    cout << "Vous avez choisi la reponse : " << *reponseUtilisateur << endl;

    return 0;
}

/* 
* cas d'application :
    
    - gérer soi-même le moment de la création et de la destruction des cases mémoire ;
    - partager une variable dans plusieurs morceaux du code ;
    - sélectionner une valeur parmi plusieurs options.
    
*/