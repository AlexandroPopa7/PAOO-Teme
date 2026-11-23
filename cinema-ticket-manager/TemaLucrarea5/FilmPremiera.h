#ifndef FILM_PREMIERA_H
#define FILM_PREMIERA_H

#include "Film.h"

class FilmPremiera : public Film {
private:
    string dataPremiera;
    int sala;

public:
    FilmPremiera(string t, string g, string data, int s);

    
    FilmPremiera(const FilmPremiera& alt);
    FilmPremiera& operator=(const FilmPremiera& alt);

    void afisare() const;
};

#endif
