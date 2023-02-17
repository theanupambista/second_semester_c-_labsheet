#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("item.dat");

    if (!fin)
    {
        cout << "Error opening file!";
        return 0;
    }

    int record, num;
    for (record = 1; record <= 5; record++)
    {
        if (record == 1 || record == 3 || record == 5)
        {
            fin >> num;
            cout << "Record " << record << ": " << num << endl;
        }
        else
        {
            fin.ignore(100, '\n');
        }
    }

    fin.close();
    return 0;
}
