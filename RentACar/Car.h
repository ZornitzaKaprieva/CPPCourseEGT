#pragma once

#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car(string, string, string, string, int, string, double);
	~Car();
	void setBrand(string);
	void setModel(string);
	void setType(string); //sedan, station wagon, hatchback
	void setColor(string);
	void setVIN(int);
	void setPlate(string);
	void setFuelConsumption(double);
	string getBrand() const;
	string getModel() const;
	string getType() const;
	string getColor() const;
	int getVIN() const;
	string getPlate() const;
	double getFuelConsumption() const;
	virtual void printCarInfo();
	virtual double calculatePrice() = 0;
private:
	string brand;
	string model;
	string type;
	string color;
	int vin;
	string plate;
	double fuelConsumption;
};

