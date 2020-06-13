#include <iostream>
#include <string>
using namespace std;

int main() 
{
	cout << "Hello World!\n" << "Aujourd'hui il fait beau" << endl;
	cout << "\\" << endl; 
	
	int userOne(15), userTwo(17);
	cout << "vos ages sont : (valeur variable) " << userOne << " et " << userTwo << endl;
	
	double pi(3.15);
	cout << "The numer of pi is now : " << pi << endl;

	bool ami(false);
	cout << ami << endl;
	
	char bienvenue('w');
	cout << bienvenue << endl;

	string ntm("on peut dire que roux est un gentil et shadow un bg");
	cout << ntm << endl;

	bool win;
	string idk;
	int test;

	int& first(userOne), second(userTwo); //Déclaration d'une référence nommée maVariable qui est accrochée à la variable ageUtilisateur
	cout << "vos ages soustrait sont : (valeur reference) " << first - second << endl;

	return 0;
}
