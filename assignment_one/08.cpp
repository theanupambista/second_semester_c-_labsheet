#include <iostream>
using namespace std;

int main()
{
    double marks[5], totalMarks = 0, percentage;

    cout << "Enter marks in five subjects: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    percentage = totalMarks / 5;

    cout << "Total marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
