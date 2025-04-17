#include <iostream>
#include "patientmal.h"
using namespace std;

void patient::afficheInfo() {
    personne::afficheInfo();
    cout << "j'ai le " << getMaladie() << endl;
}

string patient::getMaladie() {
    return maladie;
}

int patient::getNumchambre() {
    return numchambre;
}

void patient::setMaladie(string maladie) {
    this->maladie = maladie;
}

void patient::setNumchambre(int numchambre) {
    this->numchambre = numchambre;
}
