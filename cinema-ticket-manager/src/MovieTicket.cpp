#include "MovieTicket.h"

#include <cstring>
#include <iostream>
#include <utility>

char* MovieTicket::duplicateText(const char* text) {
    if (text == nullptr) {
        text = "";
    }

    const std::size_t length = std::strlen(text);
    char* copy = new char[length + 1];
    std::memcpy(copy, text, length + 1);
    return copy;
}

MovieTicket::MovieTicket(const char* movieTitle, int hallNumber, double price)
    : movieTitle_(duplicateText(movieTitle)),
      hallNumber_(hallNumber),
      price_(price) {
    std::cout << "[Constructor] Bilet creat pentru filmul: "
              << movieTitle_ << '\n';
}

MovieTicket::~MovieTicket() {
    std::cout << "[Destructor] Se elibereaza memoria pentru: ";

    if (movieTitle_ != nullptr) {
        std::cout << movieTitle_ << '\n';
    } else {
        std::cout << "(titlu deja transferat)\n";
    }

    delete[] movieTitle_;
}

MovieTicket::MovieTicket(const MovieTicket& other)
    : movieTitle_(other.movieTitle_ != nullptr
                      ? duplicateText(other.movieTitle_)
                      : nullptr),
      hallNumber_(other.hallNumber_),
      price_(other.price_) {
    std::cout << "[Copy constructor] Bilet copiat; titlul are memorie proprie.\n";
}

MovieTicket::MovieTicket(MovieTicket&& other) noexcept
    : movieTitle_(other.movieTitle_),
      hallNumber_(other.hallNumber_),
      price_(other.price_) {
    other.movieTitle_ = nullptr;

    std::cout << "[Move constructor] Titlul filmului a fost transferat.\n";
}

void MovieTicket::display() const {
    std::cout << "----- BILET CINEMA -----\n";

    if (movieTitle_ != nullptr) {
        std::cout << "Film: " << movieTitle_ << '\n';
    } else {
        std::cout << "Film: (obiect mutat; nu mai detine titlul)\n";
    }

    std::cout << "Sala: " << hallNumber_ << '\n';
    std::cout << "Pret: " << price_ << " lei\n";
    std::cout << "------------------------\n";
}

void MovieTicket::setMovieTitle(const char* newTitle) {
    char* newCopy = duplicateText(newTitle);

    delete[] movieTitle_;
    movieTitle_ = newCopy;
}
