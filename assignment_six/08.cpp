#include <iostream>

using namespace std;

int main()
{
    double feet, meters;

    cout << "Enter length in feet: ";
    cin >> feet;

    meters = feet * 0.3048;

    cout << feet << " feet is equal to " << meters << " meters." << endl;

    return 0;
}
