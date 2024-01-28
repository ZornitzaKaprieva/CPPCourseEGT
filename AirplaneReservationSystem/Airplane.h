#pragma once
class Airplane
{
public:
	Airplane(int [], int);
	void printSeats(int[], int);
	void availableSeats(int[], int);
	~Airplane();
private:
 int size;
	int seats[];

	
};

