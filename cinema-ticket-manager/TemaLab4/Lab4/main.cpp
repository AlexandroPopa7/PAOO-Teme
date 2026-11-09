
#include <iostream>
#include "Film.h"
#include "SalaCinema.h"
#include "Bilet.h"

using namespace std;

int main() {

    cout << "===== CINEMA MANAGEMENT SYSTEM =====\n\n";
    cout << "--- FILM ---\n";

    Film film1("Interstellar", "SF", 169, 8.7);
    film1.afisare();
    cout << "\n--- SALA CINEMA ---\n";

    SalaCinema sala1(1, 120, "IMAX");
    SalaCinema sala2 = sala1; // Constructor de copiere
    SalaCinema sala3(2, 80, "3D");

    sala3 = sala1; // Operator de atribuire
    cout << "\nInformatii sala copiata:\n";
    sala2.afisare();
    cout << "\nInformatii sala atribuita:\n";
    sala3.afisare();


    cout << "\n--- BILET ---\n";
    Bilet bilet1(1001, "Andrei", "Interstellar", 35.50);
    bilet1.afisare();

 
    cout << "\nProgramul s-a incheiat!\n";

    return 0;
}
