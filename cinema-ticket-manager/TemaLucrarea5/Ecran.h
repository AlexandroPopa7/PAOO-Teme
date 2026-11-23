#ifndef ECRAN_H
#define ECRAN_H

#include <iostream>
#include <string>
using namespace std;

class Ecran {
private:
    double diagonala;
    string tip;

public:
    Ecran(double diag, string t);

    // Constructor de copiere
    Ecran(const Ecran& alt);

    // Destructor
    ~Ecran();

    void afisare() const;
};

#endif
