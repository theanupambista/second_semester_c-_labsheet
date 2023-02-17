#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    max = a;
    max = (max > b) ? max : b;
    max = (max > c) ? max : c;

    cout << "The largest number is: " << max << endl;

    return 0;
}
