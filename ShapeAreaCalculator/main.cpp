#include <iostream>
#include "shapes.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
  char choice;

  do {
    cout << "\n** Shape Area Calculator **\n";
    cout << "1. Calculate area of Square\n";
    cout << "2. Calculate area of Triangle\n";
    cout << "3. Calculate area of Circle\n";
    cout << "Q. Quit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case '1': {
        double sideLength;
        cout << "Enter side length of square: ";
        cin >> sideLength;

        Square square(sideLength);
        double area = Area::CalculateSquareArea(square);
        cout << "Area of square: " << area << endl;
        break;
      }
      case '2': {
        double base, height;
        cout << "Enter base of triangle: ";
        cin >> base;
        cout << "Enter height of triangle: ";
        cin >> height;

        Triangle triangle(base, height);
        double area = Area::CalculateTriangleArea(triangle);
        cout << "Area of triangle: " << area << endl;
        break;
      }
      case '3': {
        double radius;
        cout << "Enter radius of circle: ";
        cin >> radius;

        Circle circle(radius);
        double area = Area::CalculateCircleArea(circle);
        cout << "Area of circle: " << area << endl;
        break;
      }
      case 'q':
      case 'Q':
        cout << "Exiting program...\n";
        break;
      default:
        cout << "Invalid choice. Please try again.\n";
    }
  } while (choice != 'q' && choice != 'Q');

  return 0;
}
