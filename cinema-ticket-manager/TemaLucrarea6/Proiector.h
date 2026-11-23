#ifndef PROIECTOR_H
#define PROIECTOR_H

#include <iostream>
using namespace std;

class Proiector {
private:
    int id;

public:
    explicit Proiector(int idProiector);
    ~Proiector();

    void afisare() const;
};

Proiector* creeazaProiector(int id);

#endif
