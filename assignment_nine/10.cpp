#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream even("even.dat");
    ofstream odd("odd.dat");

    if (!even || !odd)
    {
        cout << "Error opening files!";
        return 0;
    }

    int num;
    for (int i = 1; i <= 1000; i++)
    {
        cin >> num;
        if (num % 2 == 0)
        {
            even << num << endl;
        }
        else
        {
            odd << num << endl;
        }
    }

    cout << "Numbers written to files successfully!";
    even.close();
    odd.close();
    return 0;
}
