#include <iostream>
#include "medecingen.h"
using namespace std;

void medecin::afficheInfo() {
    personne::afficheInfo();
    cout << "je suis " << getSpecialite() << endl;
}

string medecin::getSpecialite() {
    return specialite;
}

int medecin::getSalaire() {
    return salaire;
}

void medecin::setSpecialite(string specialite) {
    this->specialite = specialite;
}

void medecin::setSalaire(int salaire) {
    this->salaire = salaire;
}
