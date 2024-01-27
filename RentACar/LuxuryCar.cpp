#include "LuxuryCar.h"
#include "Car.h"

LuxuryCar::LuxuryCar(string brand, string model, string type, string color, int vin, string plate, double fuelConsumption, double fee, double distance, string extras) : Car(brand, model, type, color, vin, plate, fuelConsumption)
{
	setFeePerDay(fee);
	setTraveledDistance(distance);
	setExtras(extras);
	calculateCoefficient(distance);
}

void LuxuryCar::printCarInfo()
{
	Car::printCarInfo();
	cout << "\nFee: BGN " << getFee() << " per day. Traveled distance: " << getTraveledDistance() << " km. Extras: " << getExtras() << ".\n";
	cout << "This car will cost BGN " << calculatePrice() << endl;
}

void LuxuryCar::setFeePerDay(double fee)
{
	while (fee <= 0)
	{
		cout << "The luxury car fee should be a positive value!: ";
		cin >> fee;
	}
	this->feePerDay = fee;
}

void LuxuryCar::setTraveledDistance(double traveledDistance)
{
	while (traveledDistance <= 0)
	{
		cout << "The luxury car traveled distance should be a positive value!: ";
		cin >> traveledDistance;
	}
	this->traveledDistance = traveledDistance;
}

void LuxuryCar::setExtras(string extras)
{
	while (extras != "champagne" && extras != "wine" && extras != "chocolate")
	{
		cout << "Choose between champagne, wine or chocolate: ";
		cin >> extras;
	}

	this->extras = extras;
}

double LuxuryCar::getFee() const
{
	return feePerDay;
}

double LuxuryCar::getTraveledDistance() const
{
	return traveledDistance;
}

double LuxuryCar::getExtras() const
{
	double priceExtras = 0;
	if (this->extras == "champagne")
	{
		priceExtras = 100.0;
	}
	else if (this->extras == "wine")
	{
		priceExtras = 50.0;
	}
	else if (this->extras == "chocolate")
	{
		priceExtras = 40.0;
	}
	return priceExtras;
}

double LuxuryCar::calculateCoefficient(double traveledDistance)
{
	double coefficient = 0;
	if (traveledDistance < 200)
	{
		coefficient = 0.6;
	}
	else
	{
		coefficient = 0.4;
	}
	return coefficient;
}

double LuxuryCar::calculatePrice()
{
	double price = (this->feePerDay * calculateCoefficient(traveledDistance)) + getExtras();

	return price;

}

LuxuryCar::~LuxuryCar()
{
	cout << "Destructor LuxuryCar" << endl;
}
