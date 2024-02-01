#pragma once

/*To develop a small system for a car rental company.
For each car is stored the following information:
brand, model, type, color, VIN number, vehicle number and fuel consumption.(Type means sedan, station wagon, hatchback, etc.).
The company has two types of cars - family and luxury.
For family cars, the additional information is:
usage fee - in BGN per day and the distance traveled by the client.
For luxury cars, the additional information is:
usage fee - in BGN per day, distance traveled by the client and "additional extras" fee.
To implement classes describing the cars.
To implement functions (in the appropriate classes) to determine the price the customer must pay.
For family cars, the price is determined by the product of: user fee X coefficient
For family cars, the "traveled distance" coefficient is determined as follows: for a distance traveled of less than 500 kilometers, the coefficient is 0.7; if the distance traveled is greater than or equal to 500 kilometers, then the coefficient is 0.4.
For luxury cars, this coefficient is determined as follows: if the distance traveled is less than 200 kilometers, the coefficient is 0.6; if the distance traveled is greater than or equal to 200 kilometers, then the coefficient is 0.4.
There are three extras for luxury cars - champagne (100 BGN), wine (50 BGN) and chocolate (40 BGN).
To write a sample application to test the developed classes and their functions by creating several objects of each type and storing them in an appropriate structure.*/
