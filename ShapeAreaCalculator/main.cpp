#include <iostream>
#include <string>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace shapes;

int main() {
    string choice;

    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        getline(cin, choice);

        if (choice == "1") {
            float side;
            cout << "Enter side length of the square: ";
            cin >> side;
            Square square(side);
            cout << "Area of the square: " << Area::calculateArea(square) << endl;
        } else if (choice == "2") {
            float base, height;
            cout << "Enter base length of the triangle: ";
            cin >> base;
            cout << "Enter height of the triangle: ";
            cin >> height;
            Triangle triangle(base, height);
            cout << "Area of the triangle: " << Area::calculateArea(triangle) << endl;
        } else if (choice == "3") {
            float radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            Circle circle(radius);
            cout << "Area of the circle: " << Area::calculateArea(circle) << endl;
        } else if (choice == "4") {
            cout << "Exiting the program." << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }

        cin.ignore(); // Clear the input buffer
    }

    return 0;
}
