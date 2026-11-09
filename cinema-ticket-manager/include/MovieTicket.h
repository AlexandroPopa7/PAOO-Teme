#ifndef MOVIE_TICKET_H
#define MOVIE_TICKET_H

class MovieTicket {
private:
    char* movieTitle_;
    int hallNumber_;
    double price_;

    static char* duplicateText(const char* text);

public:
    // Constructor
    MovieTicket(const char* movieTitle, int hallNumber, double price);

    // Destructor
    ~MovieTicket();

    // Copy constructor
    MovieTicket(const MovieTicket& other);

    // Move constructor
    MovieTicket(MovieTicket&& other) noexcept;

    MovieTicket& operator=(const MovieTicket& other) = delete;
    MovieTicket& operator=(MovieTicket&& other) = delete;

    void display() const;
    void setMovieTitle(const char* newTitle);
};

#endif
