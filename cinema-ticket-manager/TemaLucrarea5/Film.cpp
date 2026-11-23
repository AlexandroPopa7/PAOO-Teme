#include "Film.h"

Film::Film(string t, string g)
    : titlu(t), gen(g)
{
}

Film::Film(const Film& alt)
    : titlu(alt.titlu), gen(alt.gen)
{
    cout << "   Constructor de copiere Film apelat!\n";
}

Film& Film::operator=(const Film& alt) {
    cout << "   Operator de atribuire Film apelat!\n";

    titlu = alt.titlu;
    gen = alt.gen;

    return *this;
}

void Film::afisare() const {
    cout << "Titlu: " << titlu << " | Gen: " << gen;
}
