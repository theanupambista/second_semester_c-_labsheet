#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Employee
{
    int eid;
    string name;
    double salary;
};

int main()
{
    Employee emp[10];
    ofstream fout("emp.doc");
    if (!fout)
    {
        cout << "Error creating file." << endl;
        return 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter eid, name, and salary of employee " << i + 1 << ":" << endl;
        cin >> emp[i].eid >> emp[i].name >> emp[i].salary;
        fout << emp[i].eid << " " << emp[i].name << " " << emp[i].salary << endl;
    }
    fout.close();
    return 0;
}
