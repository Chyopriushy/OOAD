/**
 * Project Untitled
 */


#ifndef _MOVIE_H
#define _MOVIE_H

#include <string>

class Movie {
public:
    Movie();
    Movie(std::string title, std::string genre, int duration);
    ~Movie();
    std::string getTitle();
    std::string getGenre();
    int getDuration();
private: 
    std::string title;
    std::string genre;
    int duration;
};

#endif //_MOVIE_H