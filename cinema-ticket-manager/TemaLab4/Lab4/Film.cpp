
#include "Film.h"

Film::Film(string t, string g, int d, double r)
    : titlu(t), gen(g), durata(d), rating(r)
{
}

void Film::afisare() const {
    cout << "Titlu: " << titlu << endl;
    cout << "Gen: " << gen << endl;
    cout << "Durata: " << durata << " minute" << endl;
    cout << "Rating: " << rating << endl;
}
