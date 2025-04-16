/**
 * Project Untitled
 */


#include "User.h"
#include <string>

/**
 * User implementation
 */


/**
 * @return String
 */
std::string User::getName() {
    return "";
}

/**
 * @return String
 */
std::string User::getID() {
    return "";
}

/**
 * @return Integer
 */
int User::getPassword() {
    return 0;
}

/**
 * @return Integer
 */
int User::getBalance() {
    return 0;
}

/**
 * @param name
 * @return void
 */
void User::setName(std::string name) {
    return;
}

/**
 * @param Id
 * @return void
 */
void User::setID(std::string Id) {
    return;
}

/**
 * @param password
 * @return void
 */
void User::setPassword(int password) {
    return;
}

/**
 * @param balance
 * @return void
 */
void User::setBalance(int balance) {
    return;
}

/**
 * @return bool
 */
bool User::login() {
    return false;
}

/**
 * @return User
 */
User User::registerAccount() {
    return {};
}

/**
 * @return vector<Reservation>
 */
void User::showUserReservation() {
    return;
}

/**
 * @param res
 * @return void
 */
void User::addReservation(Reservation& res) {
    return;
}

/**
 * @param reservationId
 * @return void
 */
void User::cancelReservation(int reservationId) {
    return;
}

/**
 * @return vector<Reservation>
 */
std::vector<Reservation> User::getReserveList() {
    return {};
}

/**
 * @param list
 * @return void
 */
void User::setReserveList(std::vector<Reservation> list) {
    return;
}

/**
 * @return bool
 */
bool User::getAdmin() {
    return false;
}