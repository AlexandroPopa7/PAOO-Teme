#include "PazaSalaTransferabila.h"

PazaSalaTransferabila::PazaSalaTransferabila(Sala* s)
    : sala(s)
{
    blocheazaSala(sala);
}

PazaSalaTransferabila::~PazaSalaTransferabila() {
    elibereaza();
}

void PazaSalaTransferabila::elibereaza() {
    if (sala != nullptr) {
        deblocheazaSala(sala);
        sala = nullptr;
    }
}

PazaSalaTransferabila::PazaSalaTransferabila(PazaSalaTransferabila&& alta) noexcept
    : sala(alta.sala)
{
    alta.sala = nullptr;           
}

PazaSalaTransferabila& PazaSalaTransferabila::operator=(PazaSalaTransferabila&& alta) noexcept {
    if (this != &alta) {
        elibereaza();               
        sala = alta.sala;           
        alta.sala = nullptr;
    }

    return *this;
}

bool PazaSalaTransferabila::areSala() const {
    return sala != nullptr;
}
