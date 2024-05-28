#pragma once

#include <iostream>
using namespace std;

class box {
public:

    box();

    box (const double newLength, const double newBreadth, const double newHeight);
    ~box();
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);
    //overload + operator to add two Box objects.
    box operator+(const box& b);

private:
    double length;   //length of a box
    double breadth;  // breadth of a box
    double height;   // height of a box

};