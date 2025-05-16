/**
 * Project Untitled
 */


#include "Seat.h"

Seat::Seat() : seatRow(0), seatCol(0), isReserved(false) {
}

Seat::Seat(int row, int col) : seatRow(row), seatCol(col), isReserved(false) {
}

Seat::~Seat(){

}

/**
 * @return Integer
 */
int Seat::getSeatRow() {
    return this -> seatRow;
}

int Seat::getSeatCol() {
    return this -> seatCol;
}
/**
 * @return bool
 */
bool Seat::getIsReserved() {
    return this -> isReserved;
}

/**
 * @param status
 * @return void
 */
void Seat::setIsReserved(bool status) {
    this -> isReserved = status;
}