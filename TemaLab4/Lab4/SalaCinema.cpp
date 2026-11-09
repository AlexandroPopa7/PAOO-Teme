
#include "SalaCinema.h"

SalaCinema::SalaCinema(int nr, int cap, string tip)
    : numarSala(nr), capacitate(cap), tipSala(tip)
{
    cout << "Constructor apelat!\n";
}

SalaCinema::SalaCinema(const SalaCinema& alta)
    : numarSala(alta.numarSala),
      capacitate(alta.capacitate),
      tipSala(alta.tipSala)
{
    cout << "Constructor de copiere apelat!\n";
}

SalaCinema& SalaCinema::operator=(const SalaCinema& alta) {
    cout << "Operator de atribuire apelat!\n";

    if (this != &alta) {
        numarSala = alta.numarSala;
        capacitate = alta.capacitate;
        tipSala = alta.tipSala;
    }

    return *this;
}

SalaCinema::~SalaCinema() {
    cout << "Destructor apelat pentru sala "
         << numarSala << endl;
}

void SalaCinema::afisare() const {
    cout << "Sala: " << numarSala << endl;
    cout << "Capacitate: " << capacitate << endl;
    cout << "Tip: " << tipSala << endl;
}
