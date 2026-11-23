#include "SalaCinema.h"

SalaCinema::SalaCinema(int nr, double diagonala, string tipEcran)
    : numarSala(nr), ecran(new Ecran(diagonala, tipEcran))
{
}

SalaCinema::SalaCinema(const SalaCinema& alta)
    : numarSala(alta.numarSala), ecran(new Ecran(*alta.ecran))
{
}

SalaCinema& SalaCinema::operator=(const SalaCinema& alta) {
    cout << "Operator de atribuire apelat pentru sala "
         << numarSala << "!\n";

    Ecran* ecranVechi = ecran;
    ecran = new Ecran(*alta.ecran);
    delete ecranVechi;

    numarSala = alta.numarSala;

    return *this;
}

SalaCinema::~SalaCinema() {
    cout << "Destructor apelat pentru sala " << numarSala << endl;
    delete ecran;
}

void SalaCinema::afisare() const {
    cout << "Sala: " << numarSala << endl;
    ecran->afisare();
}
