
#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <string>
using namespace std;

class Film {
private:
    string titlu;
    string gen;
    int durata;
    double rating;

public:
    Film(string t, string g, int d, double r);

    void afisare() const;
};

#endif
