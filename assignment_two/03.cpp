#include <iostream>

using namespace std;

int main()
{
    int m, n;

    // Read in values for m and n
    cout << "Enter value for m: ";
    cin >> m;
    cout << "Enter value for n: ";
    cin >> n;

    // Determine if m is a multiple of n
    if (m % n == 0)
    {
        cout << m << " is a multiple of " << n << endl;
    }
    else
    {
        cout << m << " is not a multiple of " << n << endl;
    }

    return 0;
}
