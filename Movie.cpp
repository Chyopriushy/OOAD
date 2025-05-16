/**
 * Project Untitled
 */


#include "Movie.h"

Movie::Movie() {
    this -> title = "unknown";
    this -> genre = "unknown";
    this -> duration = 0;
}

Movie::Movie(std::string title, std::string genre, int duration) {
    this -> title = title;
    this -> genre = genre;
    this -> duration = duration;
}

Movie::~Movie() {}

/**
 * @return String
 */
std::string Movie::getTitle() {
    return this -> title;
}

/**
 * @return String
 */
std::string Movie::getGenre() {
    return this -> genre;
}

/**
 * @return Integer
 */
int Movie::getDuration() {
    return this -> duration;
}

