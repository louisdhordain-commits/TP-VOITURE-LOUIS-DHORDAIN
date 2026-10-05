#pragma once
#include <string>

class cvoiture
{

private:
	std::string marque;
	std::string modele;
	std::string carburant;
	int puissance;
	int vitesse;
public:
	cvoiture(std::string Marque, std::string Modele, int Puissance, std::string Carburant);
	void accelerer(int kmh);
	void ralentir(int kmh);
	void demmarer();
	void arreter();
	void afficher();
};


