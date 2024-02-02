#include "Dog.h"
#include "Animal.h"

Dog::Dog(string name, string breed, char gender, float age, string bark) : Animal(name, breed, gender, age) //досега викахме променливи, сега викаме конструктор
{
	/*setName(name); setKind(kind); setYears(years);//this is unnecessary because we do the checks in the Animal class and use the variables from there*/
	setBark(bark); // this->bark = bark;
}

void Dog::setBark(string bark)
{
	while (bark.length() < 1)
	{
		cout << "It should be at least 1 character.\nBark: ";
		getline(cin >> ws, bark);
	}
	this->bark = bark;

}

string Dog::getBark()
{
	return this->bark = bark;
}

void Dog::printInfo()
{
	Animal::printInfo();//we call the parent methods in the child class.
	cout << getName() << " says: " << getBark() << endl;
}

Dog::~Dog()
{
}

