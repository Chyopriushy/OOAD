/**
 * Project Untitled
 */


#ifndef _SEAT_H
#define _SEAT_H

class Seat {
public:
    Seat();
    Seat(int seatRow, int seatCol);
    ~Seat();
    int getSeatRow();
    int getSeatCol();
    bool getIsReserved();
/**
 * @param status
 */void setIsReserved(bool status);
private: 
    int seatRow;
    int seatCol;
    bool isReserved;
};

#endif //_SEAT_H