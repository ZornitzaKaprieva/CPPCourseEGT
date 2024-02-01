
#include"Car.h"
#include"FamilyCar.h"
#include"LuxuryCar.h"
#include <iostream>
using namespace std;

int main()
{
    //FamilyCar(string brand, string model, string type, string color, int vin, string plate, double fuelConsumption, double fee, double distance)
    Car* famCar1 = new FamilyCar("Toyota", "Yaris", "hatchback", "black", 1020304050, "C2426HT", 5.3, 100, 200);
    famCar1->printCarInfo();
    //cout << "Family car 1: Price: BGN " << famCar1->calculatePrice() << endl;
    delete famCar1;

    //LuxuryCar(string brand, string model, string type, string color, int vin, string plate, double fuelConsumption, double fee, double distance, string extras)
    Car* luxCar1 = new LuxuryCar("BMW", "Z3", "sedan", "gray", 9876543210, "PK2010KH", 7.2, 50, 100, "wine");
    luxCar1->printCarInfo();
    //cout << "Luxury car 1: Price: BGN " << luxCar1->calculatePrice() << endl;
    delete luxCar1;

}
