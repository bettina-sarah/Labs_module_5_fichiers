#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void TrouverS()
{
	fstream Fichier;
	string Adresse = "X:\\Temp\\texte1.txt";
	Fichier.open(Adresse, ios::in);

	if (Fichier.fail())
	{
		cout << "Erreur ouverture";
		exit(EXIT_FAILURE);
	}

	int CompteurS = 0;
	char Caract = Fichier.get();
	while (!Fichier.eof())
	{
		if(Caract=='s')
		{
			CompteurS++;
		}
		Caract = Fichier.get();
	}

	cout << CompteurS;
	Fichier.close();
}