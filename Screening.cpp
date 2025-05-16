/**
 * Project Untitled
 */


#include "Screening.h"
#include <iostream>
#include <iomanip>

Screening::Screening(Movie &movie, Theater &theater, std::string start_time, std::string end_time, std::string date) : movie(movie), theater(theater), start_time(start_time), end_time(end_time), date(date){

    int rows = theater.getRow();
    int cols = theater.getColumn();

    seats.resize(rows);

    for(int i = 0; i < rows; i++){
        seats[i].reserve(cols);

        for(int j = 0; j < cols; j++){
            seats[i].emplace_back(i + 1, j + 1);
        }
    }

}
Screening::~Screening(){}

/**
 * @return Movie
 */
Movie& Screening::getMovie() {
    return this -> movie;
}

/**
 * @return Theater
 */
Theater& Screening::getTheater() {
    return this -> theater;
}

/**
 * @return String
 */
std::string Screening::getStart_time() {
    return this -> start_time;
}

/**
 * @return String
 */
std::string Screening::getEnd_time() {
    return this -> end_time;
}

std::string Screening::getDate(){
    return this -> date;
}

std::vector<std::vector<Seat>>& Screening::getSeats(){
    return seats;
}

void Screening::displaySeats(){
    std::cout << "\n--- 상영관 " << theater.getTheaterNumber() << "좌석 배치 ("
    << movie.getTitle() << " - " << start_time << " ~ " << end_time;

    std::cout << " ";
    for(int j = 1; j <= theater.getColumn(); j++){
        std::cout << std::setw(3);
    }

    std::cout << "\n";

    for(int i = 0; i < theater.getRow(); i++){
        char rowChar = 'A' + i;
        std::cout << rowChar << " ";

        for(int j = 0; j < theater.getColumn(); j++){
            if (seats[i][j].getIsReserved()){
                std::cout << std::setw(3) << "X";
            } else{
                std::cout << std::setw(3) << "O";
            }
        }
        std::cout << "\n";
    }

    std::cout << "----------------------------------\n";
    std::cout << "O: 예매 가능, X: 예매 불가능";
}


