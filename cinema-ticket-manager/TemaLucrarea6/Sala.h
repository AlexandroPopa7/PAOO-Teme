#ifndef SALA_H
#define SALA_H

#include <iostream>
using namespace std;

struct Sala {
    int numar;
    bool blocata;
};

void blocheazaSala(Sala* s);
void deblocheazaSala(Sala* s);

#endif
