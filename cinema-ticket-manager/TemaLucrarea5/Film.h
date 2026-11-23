#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <string>
using namespace std;

class Film {
private:
    string titlu;
    string gen;

public:
    Film(string t, string g);

    // Constructor de copiere
    Film(const Film& alt);

    // Operator de atribuire
    Film& operator=(const Film& alt);

    virtual ~Film() = default;

    void afisare() const;
};

#endif
