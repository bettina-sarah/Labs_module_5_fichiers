#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void LireMot()
{
	fstream Fichier2;
	string Adresse = "X:\\Temp\\texte3.txt";
	Fichier2.open(Adresse, ios::in);

	if (Fichier2.fail())
	{
		cout << "Erreur ouverture";
		exit(EXIT_FAILURE);
	}


	while (!Fichier2.eof())
	{
		string Mot;
		Fichier2 >> Mot;
		cout << Mot;
		cout << " ";
	}


	Fichier2.close();
}