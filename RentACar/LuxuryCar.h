#pragma once

#include"Car.h"

class LuxuryCar : public Car
{
public:
	LuxuryCar(string, string, string, string, int, string, double, double, double, string); //+ feePerDay, traveledDistance and extras
	~LuxuryCar();

	void setFeePerDay(double);
	void setTraveledDistance(double);
	void setExtras(string);
	double getFee() const;
	double getTraveledDistance() const;
	double getExtras() const;
	double calculateCoefficient(double);

	double calculatePrice(); 
	void printCarInfo();

private:
	double feePerDay; //BGN per day
	double traveledDistance; // the distance traveled by the customer.
	string extras; //champagne (BGN 100), wine (BGN 50), chocolate (BGN 40)
	double coefficient;
};

