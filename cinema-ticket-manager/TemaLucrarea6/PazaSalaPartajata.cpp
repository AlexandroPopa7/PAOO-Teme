#include "PazaSalaPartajata.h"

PazaSalaPartajata::PazaSalaPartajata(Sala* s)
    : sala(s, deblocheazaSala)  
{
    blocheazaSala(sala.get());
}

long PazaSalaPartajata::nrReferinte() const {
    return sala.use_count();
}
