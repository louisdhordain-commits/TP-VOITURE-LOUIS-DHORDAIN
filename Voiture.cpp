#include <iostream>
#include "voiture.h"

int main() {
    cvoiture maVoiture("Peugeot", "208", 100, "Essence");

    maVoiture.demmarer();
    maVoiture.accelerer(50);
    void afficherVitesse() {
        std::cout << "Vitesse actuelle : " << maVoiture.getVitesse() << " km/h" << std::endl;
	}
    maVoiture.ralentir(20);
	std::cout << "Vitesse actuelle : " << maVoiture.getVitesse() << " km/h" << std::endl;
    maVoiture.arreter();

    return 0;
}
