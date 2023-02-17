#include <iostream>
using namespace std;

int main()
{
    float radius, area, circumference;
    const float pi = 3.14159; // approximate value of pi

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    cout << "Area of the circle is: " << area << endl;
    cout << "Circumference of the circle is: " << circumference << endl;

    return 0;
}
