/**
 * Project Untitled
 */


#ifndef _SCREENING_H
#define _SCREENING_H

#include <string>
#include <vector>
#include "Theater.h"
#include "Movie.h"
#include "Seat.h"

class Screening {
public:
    Screening(Movie& movie, Theater& theater, std::string start_time, std::string end_time, std::string date);
    ~Screening();
    Movie& getMovie();
    Theater& getTheater();
    std::string getStart_time();
    std::string getEnd_time();
    std::string getDate();
    std::vector<std::vector<Seat>>& getSeats();

    void displaySeats();

private: 
    Movie movie;
    Theater theater;
    std::string start_time;
    std::string end_time;
    std::string date;
    std::vector<std::vector<Seat>> seats;
};

#endif //_SCREENING_H