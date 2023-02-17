#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 5 == 0)
    {
        cout << number << " is a multiple of 5." << endl;
    }
    else
    {
        cout << number << " is not a multiple of 5." << endl;
    }

    return 0;
}
