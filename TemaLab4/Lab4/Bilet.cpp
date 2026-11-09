
#include "Bilet.h"

Bilet::Bilet(int id, string client, string numeFilm, double p)
    : idBilet(id),
      numeClient(client),
      film(numeFilm),
      pret(p)
{
}

void Bilet::afisare() const {
    cout << "ID bilet: " << idBilet << endl;
    cout << "Client: " << numeClient << endl;
    cout << "Film: " << film << endl;
    cout << "Pret: " << pret << " lei" << endl;
}
