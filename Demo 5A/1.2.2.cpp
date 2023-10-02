#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void EcrirePlusieursLignesALaFin()
{
	fstream Fichier;
	string Adresse = "X:\\Temp\\texte4.txt";
	Fichier.open(Adresse, ios::app);

	if (Fichier.fail())
	{
		cout << "Erreur ouverture";
		exit(EXIT_FAILURE);
	}

	string Tache1 = "Haha";
	string Tache2 = "Hehe";

	Fichier << Tache1 << Tache2;

	Fichier.close();

}