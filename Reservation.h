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
    Reservation(int reservationId, const Screening& reservedScreening, const Seat& reservedSeat);
    ~Reservation();
    int getReservationId() const;
    const Screening& getReservedScreening() const;
    const Seat& getReservedSeat() const;
private: 
    int reservationId;
    const Screening& reservedScreening;
    const Seat& reservedSeat;
};

#endif //_RESERVATION_H