#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string maChaine("hey"); //Création d'un objet 'chaine' de type string et initialisation 
    cout << maChaine << endl;
    //Affichage du string comme si c'était une chaîne de caract
    
    maChaine = "heyyy ????";
    cout << maChaine << endl;
    cout << "Longueur de la chaine: " << maChaine.size() << endl;
    maChaine.erase();
    cout << "la chaine contient: " << maChaine << endl;
    
    string chaine1("je suis un ...");
    string chaine2(".... babouin ?");
    string chaine3;

    chaine3 = chaine1 + chaine2; //Concaténation et si besoin d'un espace : ... + " " + ...
    cout << chaine3 << endl;
    cout << chaine2.substr(6, 3) << endl;
    cout << chaine1[5] << endl;

    if(chaine1 == chaine2) {
        cout << "chaines identiques" << endl;
    } else {
        cout << "chaines differentes" << endl;
    } 
    
    return 0;
}