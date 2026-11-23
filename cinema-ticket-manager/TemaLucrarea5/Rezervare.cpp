#include "Rezervare.h"

Rezervare::Rezervare(string client, int locuri)
    : numeClient(client), nrLocuri(locuri)
{
}

Rezervare& Rezervare::operator=(const Rezervare& alta) {
    numeClient = alta.numeClient;
    nrLocuri = alta.nrLocuri;

    return *this; // obiectul din stanga
}

Rezervare& Rezervare::operator=(int locuri) {
    nrLocuri = locuri;

    return *this;
}

Rezervare& Rezervare::operator+=(const Rezervare& alta) {
    nrLocuri += alta.nrLocuri;

    return *this;
}

void Rezervare::afisare() const {
    cout << "Client: " << numeClient
         << " | Locuri rezervate: " << nrLocuri << endl;
}
