
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"


#include <iostream>
using std::ostream;
using std::istream;

void printArea(Shape* s) 
{
    std::cout << "The area is:" << s->area() << std::endl;
}

int main()
{
    Shape* c = new Circle("red", 5);
    Shape* r = new Rectangle("green", 4, 5);

    c->draw();
    r->draw();

    std::cout << std::endl;

    std::cout << "Circle area: " << c->area() << std::endl;
    std::cout << "Rectangle area: " << r->area() << std::endl;

    std::cout << std::endl;
    printArea(c);
    printArea(r);
    
}

