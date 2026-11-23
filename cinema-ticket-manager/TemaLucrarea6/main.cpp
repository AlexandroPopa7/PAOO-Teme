#include <iostream>
#include <memory>
#include <stdexcept>
#include <utility>
#include "Proiector.h"
#include "Sala.h"
#include "PazaGresita.h"
#include "PazaSala.h"
#include "PazaSalaPartajata.h"
#include "Afis.h"
#include "PazaSalaTransferabila.h"

using namespace std;

// ---------------------------------------------------------------------------
// ITEM 13 - functie care foloseste un unique_ptr si apoi arunca o exceptie
// ---------------------------------------------------------------------------
void ruleazaProiectie(bool arunca) {
    
    unique_ptr<Proiector> pProiector(creeazaProiector(1));

    pProiector->afisare();

    if (arunca) {
        throw runtime_error("Eroare in timpul proiectiei!");
    }

    cout << "   Proiectia s-a terminat normal.\n";
} 

int main() {

    cout << "===== CINEMA MANAGEMENT SYSTEM =====\n\n";

    // ITEM 13 - Folosim obiecte pentru a gestiona resurse
    cout << "################ ITEM 13 ################\n";

    cout << "\n--- unique_ptr: iesire normala ---\n";
    ruleazaProiectie(false);

    cout << "\n--- unique_ptr: iesire prin exceptie ---\n";
    try {
        ruleazaProiectie(true);
    } catch (const exception& e) {
        cout << "   Exceptie prinsa: " << e.what() << endl;
        cout << "   (proiectorul a fost oprit inainte de catch)\n";
    }

    cout << "\n--- unique_ptr: un singur proprietar ---\n";
    auto p1 = make_unique<Proiector>(2);

    auto p3 = move(p1);         // transferam proprietatea
    cout << "   p1 este " << (p1 ? "plin" : "null")
         << ", p3 este " << (p3 ? "plin" : "null") << endl;

    cout << "\n--- shared_ptr: proprietari multipli ---\n";
    auto s1 = make_shared<Proiector>(3);
    cout << "   use_count = " << s1.use_count() << endl;
    {
        auto s2 = s1;           // ambii detin proiectorul
        cout << "   use_count = " << s1.use_count()
             << " (s2 creat)\n";
    }
    cout << "   use_count = " << s1.use_count()
         << " (s2 distrus, proiectorul inca exista)\n";

    // ITEM 14 - Comportamentul la copiere al claselor care gestioneaza resurse
    cout << "\n\n################ ITEM 14 ################\n";

    Sala sala1 = {1, false};
    Sala sala2 = {2, false};
    Sala sala3 = {3, false};
    Sala sala4 = {4, false};
    Sala sala5 = {5, false};

    cout << "\n--- PROBLEMA: copiere implicita (PazaGresita) ---\n";
    {
        PazaGresita g1(&sala1);
        PazaGresita g2(g1);   
        cout << "   Se distrug g2 si g1...\n";
    }

    cout << "\n--- Optiunea 1: interzicem copierea (PazaSala) ---\n";
    {
        PazaSala paza(&sala2);
        cout << "   Sala 2 este protejata de un singur obiect.\n";
    }

    cout << "\n--- Optiunea 2: numaram referintele (PazaSalaPartajata) ---\n";
    {
        PazaSalaPartajata a(&sala3);
        cout << "   Referinte: " << a.nrReferinte() << endl;
        {
            PazaSalaPartajata b = a;    
            cout << "   Referinte dupa copiere: " << a.nrReferinte() << endl;
        }
        cout << "   Referinte dupa distrugerea lui b: "
             << a.nrReferinte() << " (sala ramane blocata)\n";
    }

    cout << "\n--- Optiunea 3: copiem resursa (Afis) ---\n";
    {
        Afis a1("Dune - Sala 3");
        Afis a2 = a1;                   // copie in adancime
        a2.modifica("Matrix - Sala 1");
        cout << "   Dupa modificarea copiei:\n";
        a1.afisare();
        a2.afisare();

        Afis a3("Alt afis");
        a3 = a1;                        // atribuire (copy and swap)
        a3.afisare();
    }

    cout << "\n--- Optiunea 4: transferam proprietatea (PazaSalaTransferabila) ---\n";
    {
        PazaSalaTransferabila t1(&sala4);
        PazaSalaTransferabila t2 = move(t1);   

        cout << "   t1 are sala? " << (t1.areSala() ? "da" : "nu") << endl;
        cout << "   t2 are sala? " << (t2.areSala() ? "da" : "nu") << endl;

        PazaSalaTransferabila t3(&sala5);
        cout << "   t3 = move(t2): t3 elibereaza sala 5 si preia sala 4\n";
        t3 = move(t2);
    }

    cout << "\nProgramul s-a incheiat!\n\n";

    return 0;
}
