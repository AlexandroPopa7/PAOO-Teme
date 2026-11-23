#ifndef SALA_CINEMA_H
#define SALA_CINEMA_H

#include <iostream>
#include <string>
#include "Ecran.h"
using namespace std;

class SalaCinema {
private:
    int numarSala;
    Ecran* ecran; // alocat pe heap

public:
    SalaCinema(int nr, double diagonala, string tipEcran);

    // Constructor de copiere
    SalaCinema(const SalaCinema& alta);

    // ITEM 11 - operator de atribuire sigur la atribuire catre sine
    SalaCinema& operator=(const SalaCinema& alta);

    // Destructor
    ~SalaCinema();

    void afisare() const;
};

#endif
