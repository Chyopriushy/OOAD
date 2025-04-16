/**
 * Project Untitled
 */


#include "AccountManager.h"

/**
 * AccountManager implementation
 */


/**
 * @param id
 * @param password
 * @param name
 */
void AccountManager::registerUser(std::string id, std::string password, std::string name) {

}

/**
 * @param id
 * @return bool
 */
bool AccountManager::isIdAvailable(std::string id) {
    return false;
}

/**
 * @param password
 * @return bool
 */
bool AccountManager::isPwAvailable(std::string password) {
    return false;
}

/**
 * @param current
 * @return void
 */
void AccountManager::logout(User* current) {
    return;
}

/**
 * @param user
 */
void AccountManager::setCurrentUser(User* user) {

}

/**
 * @return User*
 */
User* AccountManager::getCurrentUser() {
    return NULL;
}

/**
 * @return void
 */
void AccountManager::changeBalance() {
    return;
}