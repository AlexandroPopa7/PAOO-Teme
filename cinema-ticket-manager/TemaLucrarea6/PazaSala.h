#ifndef PAZA_SALA_H
#define PAZA_SALA_H

#include "Sala.h"

class PazaSala {
private:
    Sala* sala;

public:
    explicit PazaSala(Sala* s);
    ~PazaSala();

    // Copierea si atribuirea sunt interzise
    PazaSala(const PazaSala&) = delete;
    PazaSala& operator=(const PazaSala&) = delete;
};

#endif
