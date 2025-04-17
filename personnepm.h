#ifndef PERSONNEPM_H_INCLUDED
#define PERSONNEPM_H_INCLUDED

#include <string>
using namespace std;

class personne {
protected:
    string nom;
    string prenom;
    int age;

public:
    personne(string nom, string prenom, int age)
        : nom(nom), prenom(prenom), age(age) {}

    virtual void afficheInfo();
    void setNom(string nom);
    void setPrenom(string prenom);
    void setAge(int age);
    string getNom();
    string getPrenom();
    int getAge();
};

#endif // PERSONNEPM_H_INCLUDED
