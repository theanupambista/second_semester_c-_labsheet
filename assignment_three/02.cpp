#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32; // convert to uppercase
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32; // convert to lowercase
    }

    cout << "The converted character is: " << ch << endl;
    return 0;
}
