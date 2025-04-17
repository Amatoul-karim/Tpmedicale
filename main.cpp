#include <iostream>
#include "personnepm.h"
#include "patientmal.h"
#include "medecingen.h"

using namespace std;

int main() {
    personne *p = new personne("Anyiniya", "Mohamed", 22);
    p->afficheInfo();

    medecin *m = new medecin("Zoulayhat", "Abdou", 24, "Gineclogue", 2000);
    m->afficheInfo();

    patient *p1 = new patient("Zaid", "Abdou", 56, "Paludisme", 2);
    p1->afficheInfo();



    return 0;
}
