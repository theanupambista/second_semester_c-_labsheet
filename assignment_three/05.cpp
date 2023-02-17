#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * (i - 1);
    }

    cout << "The sum of the series is: " << sum << endl;
    return 0;
}
