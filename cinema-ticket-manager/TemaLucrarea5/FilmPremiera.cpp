#include "FilmPremiera.h"

FilmPremiera::FilmPremiera(string t, string g, string data, int s)
    : Film(t, g), dataPremiera(data), sala(s)
{
}

FilmPremiera::FilmPremiera(const FilmPremiera& alt)
    : Film(alt),                    // copiem si partea din clasa de baza
      dataPremiera(alt.dataPremiera),
      sala(alt.sala)
{
    cout << "   Constructor de copiere FilmPremiera apelat!\n";

}

FilmPremiera& FilmPremiera::operator=(const FilmPremiera& alt) {
    cout << "   Operator de atribuire FilmPremiera apelat!\n";

    Film::operator=(alt);           // atribuim partea din clasa de baza
    dataPremiera = alt.dataPremiera;
    sala = alt.sala;

    return *this;
}

void FilmPremiera::afisare() const {
    Film::afisare();
    cout << " | Premiera: " << dataPremiera
         << " | Sala: " << sala << endl;
}
