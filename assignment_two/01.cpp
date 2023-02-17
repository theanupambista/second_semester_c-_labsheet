#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0, digit;

    cout << "Enter a four-digit number: ";
    cin >> number;

    for (int i = 0; i < 4; i++)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
