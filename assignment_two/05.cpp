#include <iostream>

using namespace std;

int main()
{
    double length, width;

    // Read in values for length and width
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Calculate area and perimeter
    double area = length * width;
    double perimeter = 2 * (length + width);

    // Print out the results
    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}
