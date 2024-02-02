#include "Box.h"
using std::cout;

int main() {

	Box box1(5, 6, 8);
	Box box2(50, 60, 70);
	Box box3 = box1 + box2; // = operator+(box1, box2);

	cout << "Box1: " << box1;
	cout << "Box2: " << box2;
	cout << "Box3 (Box1 + Box2): " << box3; // = operator<<(cout, box3);

	//alternative way for operator overloading:
	Box box4 = operator+(box1, box2);
	operator<<(cout, box4);

	//print function:
	/*box1.printBoxInfo();
	box2.printBoxInfo();
	box3.printBoxInfo();*/

	return 0;
}