#ifndef PAZA_SALA_PARTAJATA_H
#define PAZA_SALA_PARTAJATA_H

#include <memory>
#include "Sala.h"

\
class PazaSalaPartajata {
private:
    shared_ptr<Sala> sala;      

public:
    explicit PazaSalaPartajata(Sala* s);

    long nrReferinte() const;

};

#endif
