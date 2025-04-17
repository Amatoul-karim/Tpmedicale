#ifndef PATIENTMAL_H_INCLUDED
#define PATIENTMAL_H_INCLUDED

#include "personnepm.h"
#include <string>
using namespace std;

class patient : public personne {
public:
    patient(string nom, string prenom, int age, string maladie, int numchambre)
         personne(nom, prenom, age), maladie(maladie), numchambre(numchambre) {}

    void afficheInfo();
    void setMaladie(string maladie);
    void setNumchambre(int numchambre);
    string getMaladie();
    int getNumchambre();

private:
    string maladie;
    int numchambre;
};

#endif // PATIENTMAL_H_INCLUDED
