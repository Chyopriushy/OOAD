/**
 * Project Untitled
 */


#ifndef _THEATER_H
#define _THEATER_H

#include "Seat.h"
#include <vector>

class Theater {
public: 
    
int getRow();
    
int getColumn();
    
std::vector<Seat> getSeatLayer();
    
int getTheaterNumber();
    
/**
 * @param seatLayer
 */
void setSeatLayer(std::vector<Seat> seatLayer);
    
std::vector<Seat> showAvailabeSeats();
private: 
    int row;
    int column;
    std::vector<Seat> seatLayer;
    int theaterNumber;
};

#endif //_THEATER_H