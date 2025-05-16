//
// Created by navykid75 on 2025-04-15.
//
// main.cpp (테스트용)
#include <iostream>
#include "Movie.h"       // Movie 클래스 포함
#include "Theater.h"     // Theater 클래스 포함
#include "Screening.h"   // Screening 클래스 포함
#include "Seat.h"        // Seat 클래스 포함 (Screening이 내부적으로 Seat을 사용하므로)

int main() {
    std::cout << "--- 최소한의 클래스 테스트 시작 ---\n";

    // 1. Movie 객체 생성
    Movie movie1("웡카", "판타지", 112);
    std::cout << "영화 생성: " << movie1.getTitle() << std::endl;

    // 2. Theater 객체 생성 (예: 1관, 5행 5열)
    Theater theater1(5, 5, 5);
    std::cout << "상영관 생성: " << theater1.getTheaterNumber()
              << "관, " << theater1.getRow() << "행 "
              << theater1.getColumn() << "열\n";

    // 3. Screening 객체 생성 (Movie와 Theater를 사용하여)
    Screening screening1(movie1, theater1, "10:00", "12:00", "04/01");
    std::cout << "상영 생성: " << screening1.getMovie().getTitle()
              << " - " << screening1.getStart_time()
              << " (" << screening1.getTheater().getTheaterNumber() << "관)\n";

    // 4. Screening 객체의 좌석 배치도 표시
    std::cout << "\n--- 초기 좌석 배치도 --- \n";
    screening1.displaySeats();
}