#include <iostream>
#include "Screening.h"
#include "Hall.h"


int main() {

    Screening sc1("Star Wars", 10);
    Screening sc2("The Godfather", 30);

    vector<Screening> screenings;

    screenings.push_back(sc1);
    screenings.push_back(sc2);

    Hall h1("Hall 8", 80, screenings);
    //    Hall h2("Hall 9", 90, screenings);
    h1.print();

    Screening sc3("Indian Jones", 40);
    Screening sc4("Dune 2", 33);

    vector<Screening> otherScreenings;
    otherScreenings.push_back(sc3);
    otherScreenings.push_back(sc4);
    Hall h3("Hall 10", 100, otherScreenings);
    h3.print();

    Screening sc5("Nemo 2", 55);
    h3.addScreening(sc5);
    h3.print();


    return 0;
}