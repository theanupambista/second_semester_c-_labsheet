#include <iostream>
using namespace std;

inline double calculateVolume(double length, double width, double height)
{
    return length * width * height;
}

int main()
{
    double length, width, height;
    cout << "Enter the length, width, and height of the rectangular box: ";
    cin >> length >> width >> height;
    double volume = calculateVolume(length, width, height);
    cout << "The volume of the rectangular box is " << volume << endl;
    return 0;
}
