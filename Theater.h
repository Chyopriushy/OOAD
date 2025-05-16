/**
 * Project Untitled
 */


#ifndef _THEATER_H
#define _THEATER_H

#include "Seat.h"

class Theater {
public:
    Theater();
    Theater(int row, int column, int theaterNumber);
    ~Theater();
    int getRow();
    int getColumn();
    int getTheaterNumber();


private: 
    int row;
    int column;
    int theaterNumber;
};

#endif //_THEATER_H