#include"Dog.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	Dog d1("Mo", "Pittbul", 'm', 1, "bau-bau");  //Dog d1("M", "D", 's', 0, ""); //to test setters;
	d1.printInfo();
	
	//create a new object with a pointer: this pointer holds the address:
	Dog* dogPtr = nullptr; //we operate with address of this object dog
	dogPtr = new Dog("Adam", "Doggie", 'm', 12, "buu-buu");
	dogPtr->getAge();//if we want to operate with the pointer //(g. - doesn`t work)
	
	vector<Animal*> animals;
	animals.push_back(dogPtr);
	//animals.push_back(g); //we said they are pointers and not objects, so it doesn't work - we can't follow them
	animals.push_back(dogPtr);
	
	vector<Animal> animals2;
	animals2.push_back(d1);
	for (int i = 0; i < animals.size(); i++)
	{
		animals2.at(i).printInfo(); // without bark (for Dog)
	}

	return 0;
}
