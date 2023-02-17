#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0)
    {
        int digit = number % 10;
        sum += digit * digit;
        number /= 10;
    }

    cout << "The sum of the squares of the digits is: " << sum << endl;

    return 0;
}
