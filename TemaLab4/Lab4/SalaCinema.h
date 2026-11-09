
#ifndef SALA_CINEMA_H
#define SALA_CINEMA_H

#include <iostream>
#include <string>
using namespace std;

class SalaCinema {
private:
    int numarSala;
    int capacitate;
    string tipSala;

public:
    SalaCinema(int nr, int cap, string tip);

    // Constructor de copiere
    SalaCinema(const SalaCinema& alta);

    // Operator de atribuire
    SalaCinema& operator=(const SalaCinema& alta);

    // Destructor
    ~SalaCinema();

    void afisare() const;
};

#endif
