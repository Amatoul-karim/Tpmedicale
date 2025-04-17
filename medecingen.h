#ifndef MEDECINGEN_H_INCLUDED
#define MEDECINGEN_H_INCLUDED

#include "personnepm.h"
#include <string>
using namespace std;

class medecin : public personne {
public:
    medecin(string nom, string prenom, int age, string specialite, int salaire)
        : personne(nom, prenom, age), specialite(specialite), salaire(salaire) {}

    void afficheInfo();
    void setSpecialite(string specialite);
    void setSalaire(int salaire);
    string getSpecialite();
    int getSalaire();

private:
    string specialite;
    int salaire;
};

#endif // MEDECINGEN_H_INCLUDED
