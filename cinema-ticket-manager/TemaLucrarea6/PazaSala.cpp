#include "PazaSala.h"

PazaSala::PazaSala(Sala* s)
    : sala(s)
{
    blocheazaSala(sala);
}

PazaSala::~PazaSala() {
    deblocheazaSala(sala);
}
