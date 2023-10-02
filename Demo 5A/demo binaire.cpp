#include <iostream>
#include <fstream>
#include <string> //getline dedans

using namespace std;

void LireEntiers()
{
	string NomFichier = "X:\\Temp\\entiers8.bin";
	fstream Ffichier;
	Ffichier.open(NomFichier, ios::out | ios::binary);

	//validation d'ouverture

	if (Ffichier.fail())
	{
		cout << "Erreur ouverture";
		exit(EXIT_FAILURE);
	}

	int EntierLu = 42;
	Ffichier.read((char*)&EntierLu, sizeof(int));
	cout << EntierLu;
	Ffichier.close();
}