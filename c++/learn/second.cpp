#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Quel est ton age ?" << endl;
	string ages("Sans age");

	getline(cin, ages);

	cout << "Ou habitez vous ?" << endl;
	string reel("Sans réponse");
	getline(cin, reel);

	cout << "Ton age est de " << ages << " ans et tu habites: " << reel << endl;

	int a(100/10), b(4-2), resultat(0);

	cout << "A = " << a << " et B = " << b << endl;

	resultat = a / b;
	cout << "Vous pensez que a/b est de cb ?" << endl;
	string pense("Sans réponse");
	cin >> pense;
	cout << "a/b = " << resultat << " alors que vous pensiez que ct " << pense << endl;

	return 0;
}