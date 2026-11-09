
#ifndef BILET_H
#define BILET_H

#include <iostream>
#include <string>
using namespace std;

class Bilet {
private:
    const int idBilet;
    string numeClient;
    string film;
    double pret;

    
    Bilet(const Bilet&) = delete;
    Bilet& operator=(const Bilet&) = delete;

public:
    Bilet(int id, string client, string numeFilm, double p);

    void afisare() const;
};

#endif
