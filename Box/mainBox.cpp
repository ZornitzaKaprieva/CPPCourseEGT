#include "Box.h"
using std::cout;

/*To create Box class with 3 parameters - width, length and height, constructor and set/get methods.
Redefine the operators that would allow the following entry to work:
box3 = box1 + box2;
where box1, box2, box3 are Box objects. Box3 is created when we place box1 and box2 on top of each other.*/

int main() {
	Box box1(5, 6, 7);
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