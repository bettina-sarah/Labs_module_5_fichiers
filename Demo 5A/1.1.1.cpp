#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void Liretxt1()
{
	fstream Fichier;
	string Adresse = "X:\\Temp\\texte1.txt";
	Fichier.open(Adresse, ios::in);
	
	if (Fichier.fail())
	{
		cout << "Erreur ouverture";
		exit(EXIT_FAILURE);
	}

	char Caract = Fichier.get();
	while (!Fichier.eof())
	{
		cout << Caract;
		Caract = Fichier.get();
	}

	Fichier.close();

}