#include <iostream>
using namespace std;

double inchesToCm(double inches)
{
    const double cmPerInch = 2.54;
    return inches * cmPerInch;
}

int main()
{
    double inches;
    cout << "Enter the length in inches: ";
    cin >> inches;
    double cm = inchesToCm(inches);
    cout << inches << " inches is equal to " << cm << " centimeters" << endl;
    return 0;
}
