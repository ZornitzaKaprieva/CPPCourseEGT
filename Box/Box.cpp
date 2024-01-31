#include "Box.h"
using std::cout;
using std::endl;
using std::cin;

Box::Box(int width, int length, int height) {
    setWidth(width);
    setLength(length);
    setHeight(height);
}

Box operator+(Box& box1, Box& box2) //& = passing by reference:  the originals
{
    int width; //for width we choose the width of the wider box
    if (box1.getWidth() > box2.getWidth())
    {
        width = box1.getWidth();
    }
    else
    {
        width = box2.getWidth();
    }

    int length; //for length we choose the length of the longer box
    if (box1.getLength() > box2.getLength())
    {
        length = box1.getLength();
    }
    else
    {
        length = box2.getLength();
    }

    int height = box1.getHeight() + box2.getHeight(); //for height, we stack the two boxes on top of each other
    return Box(width, length, height);
}

void operator<<(ostream& COUT, Box& box) //& = passing by reference: passing the originals
{
    COUT << "This box has width " << box.getWidth() << "cm, height " << box.getHeight() << "cm and length "
        << box.getLength() << "cm." << std::endl;
}

void Box::setWidth(int width) {
    while (width <= 0) {
        cout << "Please enter a positive number for width!: ";
        cin >> width;
    }

    this->width = width;
}

int Box::getWidth(void) const {
    return this->width;
}

void Box::setLength(int length) {
    while (length <= 0) {
        cout << "Please enter a positive number for length!: ";
        cin >> length;
    }

    this->length = length;
}

int Box::getLength(void) const {
    return this->length;
}

void Box::setHeight(int height) {
    while (height <= 0) {
        cout << "Please enter a positive number for height!: ";
        cin >> height;
    }

    this->height = height;
}

int Box::getHeight(void) const {
    return this->height;
}

void Box::printBoxInfo() {
    cout << "This box has width " << this->getWidth() << "cm, height " << getHeight() << "cm and length "
        << this->getLength() << "cm." << endl;
}

Box::~Box()
{
}


