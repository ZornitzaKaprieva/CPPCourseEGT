#include "Animal.h"

Animal::Animal(string name, string breed, char gender, float age)
{
	setName(name); //this->name = name;
	setBreed(breed);//this->breed = breed;
	setGender(gender);//this->gender = gender;
	setAge(age); //this->age = age; 

}

void Animal::printInfo()
{
	cout << "Name: " << getName() << 
		"; Breed: " << getBreed() <<
		"; Gender: " << getGender() << 
		"; Age: " << getAge() << endl;
}

void Animal::setName(string name)
{
	while (name.length() < 2)
	{
		cout << "The name should be at least 2 characters.\nName:";
		getline(cin >> ws, name);
	}
	this->name = name;
}

void Animal::setBreed(string breed)
{
	while (breed.length() < 2)
	{
		cout << "The breed should be at least 2 characters.\nBreed:";
		getline(cin >> ws, breed);
	}
	this->breed = breed;
}

void Animal::setGender(char gender)
{
	while (gender != 'm' && gender != 'f')
	{
		cout << "Invalid Gender!\nGender:";
		cin >> gender;
	}
	this->gender = gender;
}

void Animal::setAge(float age)
{
	while(age < 0.1)
	{
		cout << "Invalid Age!\nAge:";
		cin >> age;
	}
	this->age = age;
}

string Animal::getName()
{
	return this->name = name;
}

string Animal::getBreed()
{
	return this->breed = breed;
}

char Animal::getGender()
{
	return this->gender = gender;
}

float Animal::getAge()
{
	return this->age = age;
}




