#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void CopierFichier(string Chemin1, string Chemin2)
{
	fstream Fichier1;
	fstream Fichier2;
	Fichier1.open(Chemin1, ios::in);
	Fichier2.open(Chemin2, ios::out); // créer et ecraser

	if (Fichier1.fail())
	{
		cout << "Erreur ouverture";
		exit(EXIT_FAILURE);
	}
	char Caract2;
	char Caract1 = Fichier1.get();
	while (!Fichier1.eof())
	{
		Caract2 = Caract1;
		Fichier2 << Caract2;
		Caract1 = Fichier1.get();
	}

	Fichier1.close();
	Fichier2.close();

}