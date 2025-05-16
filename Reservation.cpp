/**
 * Project Untitled
 */


#include "Reservation.h"

/**
 * Reservation implementation
 */

Reservation::Reservation(int reservationId, const Screening &reservedScreening, const Seat &reservedSeat)
    : reservationId(reservationId),
      reservedScreening(reservedScreening),
      reservedSeat(reservedSeat){}

/**
 * @return Integer
 */
int Reservation::getReservationId() const{
    return reservationId;
}

/**
 * @return Movie
 */
const Screening& Reservation::getReservedScreening() const {
    return reservedScreening;
}

/**
 * @return Seat
 */
const Seat& Reservation::getReservedSeat() const{
    return reservedSeat;
}