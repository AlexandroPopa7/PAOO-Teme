#include "MovieTicket.h"

#include <iostream>
#include <utility>

int main() {
    std::cout << "=== 1. CONSTRUCTOR ===\n";
    MovieTicket original("Interstellar", 3, 32.50);
    original.display();

    std::cout << "\n=== 2. COPY CONSTRUCTOR (DEEP COPY) ===\n";
    MovieTicket copiedTicket = original;
    copiedTicket.display();

    std::cout << "\nSchimbam titlul copiei in 'Inception'.\n";
    copiedTicket.setMovieTitle("Inception");

    std::cout << "\nBiletul original trebuie sa ramana neschimbat:\n";
    original.display();

    std::cout << "\nCopia are propriul titlu:\n";
    copiedTicket.display();

    std::cout << "\n=== 3. MOVE CONSTRUCTOR ===\n";
    MovieTicket movedTicket = std::move(original);

    std::cout << "\nBiletul destinatie dupa mutare:\n";
    movedTicket.display();

    std::cout << "\nSursa dupa mutare (obiectul exista, dar nu mai detine titlul):\n";
    original.display();

    std::cout << "\n=== Sfarsitul lui main ===\n";
    std::cout << "Destructorii vor elibera memoria fiecarui bilet.\n";

    return 0;
}
