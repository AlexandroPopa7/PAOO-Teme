#ifndef REZERVARE_H
#define REZERVARE_H

#include <iostream>
#include <string>
using namespace std;

class Rezervare {
private:
    string numeClient;
    int nrLocuri;

public:
    Rezervare(string client = "", int locuri = 0);

    // Constructor de copiere
    Rezervare(const Rezervare& alta) = default;

    // ITEM 10 - operatorii de atribuire returneaza referinta la *this
    Rezervare& operator=(const Rezervare& alta);
    Rezervare& operator=(int locuri);
    Rezervare& operator+=(const Rezervare& alta);

    void afisare() const;
};

#endif
