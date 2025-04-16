/**
 * Project Untitled
 */


#ifndef _SCREENING_H
#define _SCREENING_H

#include <string>
#include "Theater.h"
#include "Movie.h"

class Screening {
public: 
    
Movie getMovie();
    
Theater getTheater();
    
std::string getStart_time();
    
std::string getEnd_time();
private: 
    Movie movie;
    Theater theater;
    std::string start_time;
    std::string end_time;
};

#endif //_SCREENING_H