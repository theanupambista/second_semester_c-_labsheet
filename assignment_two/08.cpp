#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}
