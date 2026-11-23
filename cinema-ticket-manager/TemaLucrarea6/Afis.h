#ifndef AFIS_H
#define AFIS_H

#include <iostream>
#include <utility>
using namespace std;

class Afis {
private:
    char* text;

public:
    explicit Afis(const char* t);

    // Copiere in adancime
    Afis(const Afis& alt);
    Afis& operator=(Afis alt);     

    ~Afis();

    void swap(Afis& alt) noexcept;
    void modifica(const char* nou);
    void afisare() const;
};

#endif
