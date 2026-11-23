#ifndef PAZA_SALA_TRANSFERABILA_H
#define PAZA_SALA_TRANSFERABILA_H

#include "Sala.h"

class PazaSalaTransferabila {
private:
    Sala* sala;

    void elibereaza();

public:
    explicit PazaSalaTransferabila(Sala* s);
    ~PazaSalaTransferabila();

    // Copierea este interzisa
    PazaSalaTransferabila(const PazaSalaTransferabila&) = delete;
    PazaSalaTransferabila& operator=(const PazaSalaTransferabila&) = delete;

    // Mutarea este permisa
    PazaSalaTransferabila(PazaSalaTransferabila&& alta) noexcept;
    PazaSalaTransferabila& operator=(PazaSalaTransferabila&& alta) noexcept;

    bool areSala() const;
};

#endif
