/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

#include <string>
#include "Reservation.h"

class User {
public: 
    bool isAdmin;
    
std::string getName();
    
std::string getID();
    
int getPassword();
    
int getBalance();
    
/**
 * @param name
 */
void setName(std::string name);
    
/**
 * @param Id
 */
void setID(std::string Id);
    
/**
 * @param password
 */
void setPassword(int password);
    
/**
 * @param balance
 */
void setBalance(int balance);
    
bool login();
    
User registerAccount();
    
void showUserReservation();
    
/**
 * @param res
 */
void addReservation(Reservation& res);
    
/**
 * @param reservationId
 */
void cancelReservation(int reservationId);
    
std::vector<Reservation> getReserveList();
    
/**
 * @param list
 */
void setReserveList(std::vector<Reservation> list);
    
bool getAdmin();
private: 
    std::string name;
    std::string Id;
    int password;
    int balance;
    std::vector<Reservation> userReservation;
    std::vector<Reservation> reserveList;
};

#endif //_USER_H