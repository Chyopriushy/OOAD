/**
 * Project Untitled
 */


#ifndef _SEAT_H
#define _SEAT_H

class Seat {
public: 
    
int getSeatNumber();
    
bool getIsReserved();
    
/**
 * @param status
 */
void setIsReserved(bool status);
private: 
    int seatNumber;
    bool isReserved;
};

#endif //_SEAT_H