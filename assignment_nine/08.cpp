#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.dat");

    if (!fin)
    {
        cout << "Error opening file!";
        return 0;
    }

    int count = 0, num;
    while (fin >> num)
    {
        count++;
    }

    cout << "Number of objects: " << count << endl;
    fin.close();
    return 0;
}
