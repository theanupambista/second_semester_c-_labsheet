#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    // Read in values for a, b, and c
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;

    // Calculate and print the sum of the three numbers
    int sum = a + b + c;
    cout << "The sum of " << a << ", " << b << ", and " << c << " is " << sum << endl;

    // Calculate and print the average of the three numbers
    double avg = static_cast<double>(sum) / 3;
    cout << "The average of " << a << ", " << b << ", and " << c << " is " << avg << endl;

    // Find and print the maximum of the three numbers
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    cout << "The maximum of " << a << ", " << b << ", and " << c << " is " << max << endl;

    // Find and print the minimum of the three numbers
    int min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    cout << "The minimum of " << a << ", " << b << ", and " << c << " is " << min << endl;

    return 0;
}
