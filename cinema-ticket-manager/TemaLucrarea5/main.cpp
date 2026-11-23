#include <iostream>
#include "Rezervare.h"
#include "SalaCinema.h"
#include "FilmPremiera.h"

using namespace std;

int main() {

    cout << "===== CINEMA MANAGEMENT SYSTEM =====\n\n";

    cout << "--- REZERVARE ---\n";

    Rezervare r1("Andrei", 2);
    Rezervare r2("Maria", 3);
    Rezervare r3("Ioana", 5);

    r1 = r2 = r3;          
    cout << "Dupa r1 = r2 = r3:\n";
    r1.afisare();
    r2.afisare();
    r3.afisare();

    r1 = r2 = 4;          
    cout << "\nDupa r1 = r2 = 4:\n";
    r1.afisare();
    r2.afisare();

    (r1 += r2) += r3;      
    cout << "\nDupa (r1 += r2) += r3:\n";
    r1.afisare();

    // ITEM 11 - atribuire catre sine
    cout << "\n--- SALA CINEMA ---\n";

    SalaCinema sala1(1, 18.5, "IMAX");
    SalaCinema sala2(2, 12.0, "3D");

    cout << "\nsala2 = sala1;\n";
    sala2 = sala1;

    cout << "\nsala1 = sala1; (atribuire catre sine)\n";
    SalaCinema& referinta = sala1;
    sala1 = referinta;

    cout << "\nSala 1 dupa atribuirea catre sine:\n";
    sala1.afisare();

    cout << "\nSala 2 dupa atribuire:\n";
    sala2.afisare();

    // ITEM 12 
    cout << "\n--- FILM PREMIERA ---\n";

    FilmPremiera f1("Dune", "SF", "01.03.2026", 3);
    FilmPremiera f2("Avengers Doomsday", "Drama", "15.04.2026", 1);

    cout << "\nFilmPremiera f3 = f1; (constructor de copiere)\n";
    FilmPremiera f3 = f1;

    cout << "\nf2 = f1; (atribuire)\n";
    f2 = f1;

    cout << "\nf1: ";
    f1.afisare();
    cout << "f2: ";
    f2.afisare();
    cout << "f3: ";
    f3.afisare();

    cout << "\nProgramul s-a incheiat!\n\n";

    return 0;
}
