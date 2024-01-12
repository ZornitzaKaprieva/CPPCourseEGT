#pragma once
#include <string>
using namespace std;

class Screening {
public:
    Screening(string, int);
    void setMovieName(string);
    void setSoldTickets(int);
    string getMovieName();
    int getSoldTickets();
    void printInfo();
private:
    string movieName;
    int soldTickets;
};


