#include "Afis.h"
#include <cstring>

static char* copiazaSir(const char* sursa) {
    char* copie = new char[strlen(sursa) + 1];
    strcpy(copie, sursa);
    return copie;
}

Afis::Afis(const char* t)
    : text(copiazaSir(t))
{
}

Afis::Afis(const Afis& alt)
    : text(copiazaSir(alt.text))    
{
    cout << "   Constructor de copiere Afis apelat (copie in adancime)!\n";
}

Afis& Afis::operator=(Afis alt) {   
    cout << "   Operator de atribuire Afis apelat!\n";
    swap(alt);                      
    return *this;
}

Afis::~Afis() {
    delete[] text;
}

void Afis::swap(Afis& alt) noexcept {
    std::swap(text, alt.text);
}

void Afis::modifica(const char* nou) {
    char* copie = copiazaSir(nou);
    delete[] text;
    text = copie;
}

void Afis::afisare() const {
    cout << "   Afis: " << text << endl;
}
