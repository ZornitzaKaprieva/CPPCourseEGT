#include <iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

int main()
{
    Shape* c = new Circle("red"); //creating circle object
    Shape* r = new Rectangle("green"); //creating rectangle object

    c->draw(); // call method draw 
    r->draw();  
}

