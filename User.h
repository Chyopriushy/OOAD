/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

#include <string>
#include <vector>
#include "Reservation.h"

class User {
public:
    User(std::string Id, int password, std::string name, int balance = 0, bool isAdmin = false);
    ~User();
    std::string getName();
    std::string getID();
    int getPassword();
    int getBalance();
    void setName(std::string name);
    void setID(int Id);
    void setPassword(int password);
    void setBalance(int balance);
    const std::vector<Reservation>& getReserveList() const;
    void addReservation(const Reservation& reservation);
    void cancelReservation(int reservationId);
    bool getAdmin();
private: 
    std::string name;
    std::string Id;
    int password;
    int balance;
    std::vector<Reservation> reserveList;
    bool isAdmin;
};

#endif //_USER_H