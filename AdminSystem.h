/**
 * Project Untitled
 */


#ifndef _ADMINSYSTEM_H
#define _ADMINSYSTEM_H

#include "ReservationSystem.h"

class AdminSystem {
public: 
    
void addMovie();
    
void removeMovie();
private: 
    ReservationSystem* reservationSystem;
};

#endif //_ADMINSYSTEM_H