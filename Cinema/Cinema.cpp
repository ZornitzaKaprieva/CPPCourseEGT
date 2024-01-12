#include "Cinema.h"
#include <iostream>

Cinema::Cinema(string name, string address, vector<Hall> halls) {
    setName(name);
    setAddress(address);
    setHallsList(halls);
}

void Cinema::printInfo() {
    cout << " Cinema name " << getName() << " address " << getAddress() << " ";
    for (int i = 0; i < hallsList.size(); i++) {
        hallsList.at(i).printInfo();
        cout << endl;
    }
}

void Cinema::addHalltoList(Hall hall) {
    this->hallsList.push_back(hall);
}

void Cinema::setHallsList(vector<Hall> halls) {
    this->hallsList = halls;
}

vector<Hall> Cinema::getHallsList() {
    return this->hallsList;
}

void Cinema::setName(string name) {
    this->name = name;
}

string Cinema::getName() {
    return this->name;
}

void Cinema::setAddress(string address) {
    this->address = address;
}

string Cinema::getAddress() {
    return this->address;
}

