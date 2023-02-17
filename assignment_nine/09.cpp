#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin || !fout)
    {
        cout << "Error opening files!";
        return 0;
    }

    char ch;
    while (fin.get(ch))
    {
        fout.put(ch);
    }

    cout << "Contents copied successfully!";
    fin.close();
    fout.close();
    return 0;
}
