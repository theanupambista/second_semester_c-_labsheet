#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 5 == 0 && number % 11 != 0)
    {
        cout << number << " is a multiple of 5 but not 11." << endl;
    }
    else
    {
        cout << number << " is either not a multiple of 5 or is also a multiple of 11." << endl;
    }

    return 0;
}
