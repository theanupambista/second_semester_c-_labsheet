#include <iostream>
using namespace std;

int main()
{
    int arr[30];
    for (int i = 1; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            arr[i - 1] = -i;
        }
        else
        {
            arr[i - 1] = i;
        }
    }

    cout << "The sequence is: ";
    for (int i = 0; i < 30; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
