#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void LigneALaFois()
{
	fstream Fichier;
	string Adresse = "X:\\Temp\\texte3.txt";
	Fichier.open(Adresse, ios::in);

	if (Fichier.fail())
	{
		cout << "Erreur ouverture";
		exit(EXIT_FAILURE);
	}
	string s;
	int Compteur = 0;
	while (!Fichier.eof())
	{
		getline(Fichier, s);
		Compteur++;
		if (Compteur == 4)
		{
			cout << s;
		}
	}
	
	Fichier.close();

}