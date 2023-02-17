#include <iostream>
#include <cmath>
using namespace std;

inline double squareRoot(int n)
{
    return sqrt(n);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The square root of " << n << " is " << squareRoot(n) << endl;
    return 0;
}
