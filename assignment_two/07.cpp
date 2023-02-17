#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    // Swap the values of a and b
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping, the first number is " << a << " and the second number is " << b << endl;

    return 0;
}
