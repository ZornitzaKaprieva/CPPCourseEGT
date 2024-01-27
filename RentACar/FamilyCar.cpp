#include "FamilyCar.h"
#include "Car.h"

FamilyCar::FamilyCar(string brand, string model, string type, string color, int vin, string plate, double fuelConsumption, double fee, double distance) : Car(brand, model, type, color, vin, plate, fuelConsumption)
{
	setFeePerDay(fee);
	setTraveledDistance(distance);
	calculateCoefficient(distance);
}

void FamilyCar::printCarInfo()
{
	Car::printCarInfo();
	cout << "\nFee: BGN " << getFee() << " per day. Traveled distance: " << getTraveledDistance() << ".\n";
	cout << "This car will cost BGN " << calculatePrice() << endl;
}

void FamilyCar::setFeePerDay(double fee)
{
	while (fee <= 0)
	{
		cout << "The family car fee should be a positive value!: ";
		cin >> fee;
	}
	this->feePerDay = fee;
}

void FamilyCar::setTraveledDistance(double traveledDistance)
{
	while (traveledDistance <= 0)
	{
		cout << "The family car traveled distance should be a positive value!: ";
		cin >> traveledDistance;
	}
	this->traveledDistance = traveledDistance;
}

double FamilyCar::getFee() const
{
	return feePerDay;
}

double FamilyCar::getTraveledDistance() const
{
	return traveledDistance;
}

double FamilyCar::calculateCoefficient(double traveledDistance)
{
	double coefficient = 0;
	if (traveledDistance < 500)
	{
		coefficient = 0.7;
	}
	else
	{
		coefficient = 0.4;
	}
	return coefficient;
}

double FamilyCar::calculatePrice()
{
	double price = this->feePerDay * calculateCoefficient(traveledDistance);

	return price;
}

FamilyCar::~FamilyCar()
{
	cout << "Destructor FamilyCar" << endl;
}