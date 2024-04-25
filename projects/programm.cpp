#include <iostream>

using namespace std;

// function to calculate area of triangle 
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// function to calculate area of rectangle 
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// function to calculate area of square 
double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    int choice;
    double base, height, length, width, side, area;

    // the do while loop 
    do {
        cout << "Select the shape to calculate the area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        // the switch statement 
        switch (choice) {
            case 1:
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = calculateTriangleArea(base, height);
                cout << "The area of the triangle is " << area << endl;
                break;
            case 2:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = calculateRectangleArea(length, width);
                cout << "The area of the rectangle is " << area << endl;
                break;
            case 3:
                cout << "Enter the side of the square: ";
                cin >> side;
                area = calculateSquareArea(side);
                cout << "The area of the square is " << area << endl;
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid input. Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}
