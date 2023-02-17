#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    int lcm = (a * b) / gcd;

    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;

    return 0;
}
