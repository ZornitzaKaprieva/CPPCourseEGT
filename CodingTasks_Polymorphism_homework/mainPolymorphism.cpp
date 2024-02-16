#include <iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

int main()
{
    Shape* c = new Circle("red", 5);
    Shape* r = new Rectangle("green", 4, 5);

    c->draw();
    r->draw();

    std::cout << "Circle area: " << c->area() << std::endl;
    std::cout << "Rectangle area: " << r->area() << std::endl;
}

