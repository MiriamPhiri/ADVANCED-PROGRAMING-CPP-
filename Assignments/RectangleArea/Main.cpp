#include <iostream>
#include "Rectangle.h"
using namespace std;


int main() {
  // Create a rectangle object with default constructor
  Rectangle rect1;

  //rectangle 1 dimensions
float length1, width1;
cout<<"Enter the length of the rectangle1 : ";
cin >> length1;
cout<<"Enter the width of the rectangle1 : ";
cin >> width1;

  // Calculate and display area of rectangle 1
  float area1 =  width1 *  length1;
  cout << "Area of rectangle 1: " << area1 << endl;

  // Create another rectangle with overloaded constructor
  cout << "\nEnter length for rectangle 2: ";
  float length2;
  cin >> length2;

  cout << "Enter width for rectangle 2: ";
  float width2;
  cin >> width2;

  Rectangle rect2(length2, width2);

  // Calculate and display area of rectangle 2
  float area2 = rect2.CalculateArea();
  cout << "Area of rectangle 2: " << area2 << endl;

  return 0;
}
