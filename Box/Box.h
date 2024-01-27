#pragma once
#include <iostream>
using std::ostream;

class Box {
    friend Box operator+(Box&, Box&);
    friend void operator<<(ostream&, Box&); // = void printBoxInfo(void)
public:
    Box(int, int, int); //create Box object with 3 parameters: width, height, length
    ~Box();

    void setWidth(int);
    int getWidth(void) const;

    void setLength(int);
    int getLength(void) const;

    void setHeight(int);
    int getHeight(void) const;

    void printBoxInfo(void); // = friend void operator<<(ostream&, Box&);
private:
    int width;
    int height;
    int length;
};