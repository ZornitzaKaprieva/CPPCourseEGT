#include <iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

int main()
{

    Shape* c = new Circle("red");
    Shape* r = new Rectangle("green");

    c->draw();
    r->draw();  
}

