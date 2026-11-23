#include "Ecran.h"

Ecran::Ecran(double diag, string t)
    : diagonala(diag), tip(t)
{
    cout << "   [Ecran " << tip << " creat]\n";
}

Ecran::Ecran(const Ecran& alt)
    : diagonala(alt.diagonala), tip(alt.tip)
{
    cout << "   [Ecran " << tip << " copiat]\n";
}

Ecran::~Ecran() {
    cout << "   [Ecran " << tip << " distrus]\n";
}

void Ecran::afisare() const {
    cout << "Ecran: " << tip << ", " << diagonala << " m" << endl;
}
