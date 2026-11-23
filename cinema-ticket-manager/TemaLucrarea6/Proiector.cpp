#include "Proiector.h"

Proiector::Proiector(int idProiector)
    : id(idProiector)
{
    cout << "   [Proiector " << id << " pornit]\n";
}

Proiector::~Proiector() {
    cout << "   [Proiector " << id << " oprit]\n";
}

void Proiector::afisare() const {
    cout << "   Proiector " << id << " in functiune\n";
}

Proiector* creeazaProiector(int id) {
    return new Proiector(id);
}
