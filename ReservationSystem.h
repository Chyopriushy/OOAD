/**
 * Project Untitled
 */


#ifndef _RESERVATIONSYSTEM_H
#define _RESERVATIONSYSTEM_H

#include <vector>
#include "Movie.h"
#include "Screening.h"
#include "AccountManager.h"

class ReservationSystem {
public: 
    
void showMovieList();
    
void reserveMovie();
    
void showReservedList();
    
void cancel();
    
void logout();
    
void login();
    
void loginAdmin();
    
void addBalance();
    
void showMainMenu();
private: 
    std::vector<Movie> movies;
    AccountManager* currentAccountManager;
    std::vector<Screening> screeningList;
};

#endif //_RESERVATIONSYSTEM_H