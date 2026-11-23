#include "Sala.h"

void blocheazaSala(Sala* s) {
    s->blocata = true;
    cout << "   [Sala " << s->numar << " BLOCATA]\n";
}

void deblocheazaSala(Sala* s) {
    if (!s->blocata) {
        cout << "   [EROARE: sala " << s->numar
             << " era deja deblocata!]\n";
        return;
    }

    s->blocata = false;
    cout << "   [Sala " << s->numar << " deblocata]\n";
}
