#include <iostream>
#include "Screening.h"
#include "Hall.h"
#include "Cinema.h"


int main() {

	Screening sc1("Star Wars", 10);
	Screening sc2("The Godfather", 30);

	vector<Screening> screenings;

	screenings.push_back(sc1);
	screenings.push_back(sc2);

	Hall h1("Hall 8", 80, screenings);
	Hall h2("Hall 9", 90, screenings);
	h1.print();
	h2.print();
	cout << "\n.........." << endl;

	Screening sc3("Indian Jones", 40);
	Screening sc4("Dune 2", 33);

	vector<Screening> otherScreenings;
	otherScreenings.push_back(sc3);
	otherScreenings.push_back(sc4);
	Hall h3("Hall 10", 100, otherScreenings);
	h3.print();
	cout << "\n.........." << endl;

	Screening sc5("Nemo 2", 55);
	h3.addScreening(sc5);
	h3.print();
	cout << "\n.........." << endl;


	vector<Hall> halls;
	halls.push_back(h1);
	halls.push_back(h2);
	halls.push_back(h3);
	Cinema cinema("Arena", "Sofia", halls);
	cinema.print();
	cout << "\n.........." << endl;

	string movieName;
	getline(cin, movieName);


	for (int i = 0; i < halls.size(); i++) { // is for halls
		Hall h = halls.at(i); // current hall

		vector<Screening> scr = h.getScreeningList();  // projection in the current hall

		for (int j = 0; j < scr.size(); j++) {  // is for screening vector
			Screening scrObj = scr.at(j); // current projection
			string currentMovieName = scrObj.getMovieName();  // movie name from screening object

			if (movieName == currentMovieName) {
				cout << " We found projection " << scrObj.getMovieName() << endl;
				scrObj.print();
				h.print();
			}
		}
	}

	return 0;
}