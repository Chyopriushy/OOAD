/**
 * Project Untitled
 */


#include "Theater.h"

Theater::Theater() : row(0), column(0), theaterNumber(0){}

Theater::Theater(int row, int column, int theaterNumber) : row(row), column(column), theaterNumber(theaterNumber){
}

Theater::~Theater() {
}


int Theater::getRow() {
    return this -> row;
}

/**
 * @return Integer
 */
int Theater::getColumn() {
    return this -> column;
}

/**
 * @return Integer
 */
int Theater::getTheaterNumber() {
    return this -> theaterNumber;
}

