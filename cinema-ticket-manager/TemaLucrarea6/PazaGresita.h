#ifndef PAZA_GRESITA_H
#define PAZA_GRESITA_H

#include "Sala.h"

class PazaGresita {
private:
    Sala* sala;

public:
    explicit PazaGresita(Sala* s);
    ~PazaGresita();
};

#endif
