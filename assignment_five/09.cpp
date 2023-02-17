#include <iostream>
using namespace std;

inline int cube(int num)
{
    return num * num * num;
}

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "The cube of " << num << " is " << cube(num) << endl;

    return 0;
}
