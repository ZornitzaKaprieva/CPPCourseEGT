#include "Car.h"

Car::Car(string brand, string model, string type, string color, int vin, string plate, double fuelConsumption)
{
	setBrand(brand);
	setModel(model);
	setType(type);
	setColor(color);
	setVIN(vin);
	setPlate(plate);
	setFuelConsumption(fuelConsumption);
	/*this->brand = brand;
	this->model = model;
	this->type = type;
	this->color = color;
	this->vin = vin;
	this->plate = plate;
	this->fuelConsumption = fuelConsumption;*/
}

void Car::printCarInfo()
{
	cout << getBrand() << " " << getModel() << ", " << getType() << ", "
		<< getColor() << ", " << getVIN() << ", " << getPlate() << ", " << getFuelConsumption() << " ";
}

void Car::setBrand(string brand)
{
	this->brand = brand;
}

void Car::setModel(string model)
{
	this->model = model;
}

void Car::setType(string type)
{
	this->type = type;
}

void Car::setColor(string color)
{
	this->color = color;
}

void Car::setVIN(int vin)
{
	this->vin = vin;
}

void Car::setPlate(string plate)
{
	this->plate = plate;
}

void Car::setFuelConsumption(double fuelConsumption)
{
	this->fuelConsumption = fuelConsumption;
}

string Car::getBrand() const
{
	return brand;
}

string Car::getModel() const
{
	return model;
}

string Car::getType() const
{
	return type;
}

string Car::getColor() const
{
	return color;
}

int Car::getVIN() const
{
	return vin;
}

string Car::getPlate() const
{
	return plate;
}

double Car::getFuelConsumption() const
{
	return fuelConsumption;
}

Car::~Car()
{
	cout << "Destructor" << endl;
}
