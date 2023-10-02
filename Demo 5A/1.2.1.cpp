#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void EcrireLigneALaFin()
{
	fstream Fichier;
	string Adresse = "X:\\Temp\\texte3.txt";
	Fichier.open(Adresse, ios::app);

	if (Fichier.fail())
	{
		cout << "Erreur ouverture";
		exit(EXIT_FAILURE);
	}

	string Produit = "333444,\t Iphone 15 pro,\t9990.9";

	Fichier << Produit;

	Fichier.close();

}