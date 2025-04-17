#include <iostream>
#include "personnepm.h"
using namespace std;

void personne::afficheInfo() {
    cout << "je suis " << nom << " " << prenom << " j'ai " << age << endl;
}

string personne::getNom() {
    return nom;
}

string personne::getPrenom() {
    return prenom;
}

int personne::getAge() {
    return age;
}

void personne::setNom(string nom) {
    this->nom = nom;
}

void personne::setPrenom(string prenom) {
    this->prenom = prenom;
}

void personne::setAge(int age) {
    this->age = age;
}
