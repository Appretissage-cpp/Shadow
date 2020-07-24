#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    
    int voitures(2);

   switch (voitures)
   {
   case 0: 
        cout << "Vous etes pauvres" << endl;
       break;
    
    case 1:
        cout << "vous etes dans la classe moyenne" << endl;
        break;
    
    case 5:
        cout << "Vous etes riche" << endl;
        break;
   
    default:
        cout << "Je n'ai rien a dire" << endl;
       break;
   }
    
    
    bool cat(false);

    if (cat) {
        cout << "Les chats sont aimees" << endl;
    }

    else if (!cat && voitures == 2) { // || = ou! = n'est pas = non
        cout << "les chats ne sont pas aime et votre nb de voitures et de 2" << endl;
    }

    else {
        cout << "Les chats sont deteste" << endl;
    }


    while (voitures < 4) {
        cout << "Cb de voitures avez vous ?" << endl;
        cin >> voitures;
    }

    /*do {
            
        cout << "Cb de voitures avez vous ?" << endl;
        cin >> voitures;
    } while (voitures < 4);*/
    // Soit while, soit do ... while
    //  Le principe est le même, le programme a le même comportement. Le gros intérêt dedo ... whileest qu'on 
    //  s'assure que la boucle sera lue au moins une fois.

    cout << "Vous avez " << voitures << " voitures" << endl;


    for (int compteur(1) ; compteur < 25 ; compteur += 2)
    {
        cout << compteur << endl;
    }
    
    cout << "Finish" << endl;

    return 0;
}


// Quand utiliser unforet quand utiliser unwhile?
// On utilise la boucleforquand on connaît le nombre de répétitions de la boucle et
// on utilise le plus souvent la bouclewhilequand on ne sait pas combien de fois la boucle va être effectuée.