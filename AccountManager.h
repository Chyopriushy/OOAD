/**
 * Project Untitled
 */


#ifndef _ACCOUNTMANAGER_H
#define _ACCOUNTMANAGER_H

#include <string>
#include <vector>
#include "User.h"


class AccountManager {
public: 
    
/**
 * @param id
 * @param password
 * @param name
 */
void registerUser(std::string id, std::string password, std::string name);
    
/**
 * @param id
 */
bool isIdAvailable(std::string id);
    
/**
 * @param password
 */
bool isPwAvailable(std::string password);
    
/**
 * @param current
 */
void logout(User* current);
    
/**
 * @param user
 */
void setCurrentUser(User* user);
    
User* getCurrentUser();
    
void changeBalance();
private: 
    std::vector<User> users;
    User* currentUser;
};

#endif //_ACCOUNTMANAGER_H