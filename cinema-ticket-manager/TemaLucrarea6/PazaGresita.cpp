#include "PazaGresita.h"

PazaGresita::PazaGresita(Sala* s)
    : sala(s)
{
    blocheazaSala(sala);        
}

PazaGresita::~PazaGresita() {
    deblocheazaSala(sala);      
}
