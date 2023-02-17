#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 2, 5, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    bool sorted = true;

    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
    {
        cout << "The array is sorted.";
    }
    else
    {
        cout << "The array is not sorted.";
    }

    return 0;
}
