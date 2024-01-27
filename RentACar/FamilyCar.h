#pragma once

#include"Car.h"
class FamilyCar : public Car
{
public:
	FamilyCar(string, string, string, string, int, string, double, double, double); //+ feePerDay and traveledDistance
	~FamilyCar();
	void setFeePerDay(double);
	void setTraveledDistance(double);
	double getFee() const;
	double getTraveledDistance() const;
	double calculateCoefficient(double); 

	double calculatePrice();
	void printCarInfo();
private:
	double feePerDay; //BGN per day
	double traveledDistance; // the distance traveled by the customer.
	double coefficientTraveledDistance;
};

