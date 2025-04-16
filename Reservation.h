/**
 * Project Untitled
 */


#ifndef _RESERVATION_H
#define _RESERVATION_H

#include "Movie.h"
#include "Screening.h"
#include "Seat.h"

class Reservation {
public: 
    
int getReservationId();
    
Movie getReservedScreening();
    
Seat getReservedSeat();
private: 
    int reservationId;
    Screening reservedScreening;
    Seat reservedSeat;
};

#endif //_RESERVATION_H