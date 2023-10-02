#include <iostream>
#include <fstream>
#include <string> //getline dedans

using namespace std;

void LireParCharactere1();
void Liretxt1();
void TrouverS();
void LireMot();
void LigneALaFois();
void LireEntiers();
void EcrireLigneALaFin();
void EcrirePlusieursLignesALaFin();
void CopierFichier(string Chemin1, string Chemin2);


void main(void)
{
	EcrirePlusieursLignesALaFin();

}

void LireParCharactere1()
{
	string NomFichier = "X:\\Temp\\texte3.txt";
	fstream Ffichier;
	Ffichier.open(NomFichier, ios::app);

	//validation d'ouverture

	if (Ffichier.fail())
	{
		cout << "Erreur ouverture";
		exit(EXIT_FAILURE);
	}



	//while (!Ffichier.eof()) {
	//	char Caractere = Ffichier.get(); // lire 1er char
	//	cout << Caractere;
	//}
	char caractere = Ffichier.get(); //lire tout
	while (!Ffichier.eof()) 
	{
		cout << caractere;
		caractere = Ffichier.get();
	}

	Ffichier.close();

}