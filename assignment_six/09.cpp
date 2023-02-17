#include <iostream>

using namespace std;

// Define an inline function to compute the area of a rectangle
inline double area(double length, double width)
{
    return length * width;
}

int main()
{
    double length, width, rectArea;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    // Call the inline function to compute the area of the rectangle
    rectArea = area(length, width);

    cout << "The area of the rectangle is " << rectArea << endl;

    return 0;
}
