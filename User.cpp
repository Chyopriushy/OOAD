/**
 * Project Untitled
 */


#include "User.h"
#include <iostream>

User::User(std::string Id, int password, std::string name, int balance, bool isAdmin) {
    this -> Id = Id;
    this -> password = password;
    this -> name = name;
    this -> balance = balance;
    this -> isAdmin = isAdmin;
}

User::~User(){

}


/**
 * @return String
 */
std::string User::getName() {
    return this -> name;
}

/**
 * @return String
 */
std::string User::getID() {
    return this -> Id;
}

/**
 * @return Integer
 */
int User::getPassword() {
    return this -> password;
}

/**
 * @return Integer
 */
int User::getBalance() {
    return this -> balance;
}

/**
 * @param name
 * @return void
 */
void User::setName(std::string name) {
    this -> name = name;
}

/**
 * @param Id
 * @return void
 */
void User::setID(int Id) {
    this -> Id = Id;
}

/**
 * @param password
 * @return void
 */
void User::setPassword(int password) {
    this -> password = password;
}

/**
 * @param balance
 * @return void
 */
void User::setBalance(int balance) {
    this -> balance = balance;
}

/**
 * @return bool
 */



/**
 * @return vector<Reservation>
 */
const std::vector<Reservation>& User::getReserveList() const{
    return reserveList;
}

void User::addReservation(const Reservation& reservation) {
    reserveList.push_back(reservation);
    std::cout << "예약 번호 : " << reservation.getReservationId() << " 로 예매 내역 추가";
}

void User::cancelReservation(int reservationId) {
    for(auto it = reserveList.begin(); it != reserveList.end(); it++){
        if(it -> getReservationId() == reservationId){
            reserveList.erase(it);
        }
    }
}

/**
 * @return bool
 */
bool User::getAdmin() {
    return this -> isAdmin;
}