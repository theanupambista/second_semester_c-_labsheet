#include <iostream>
using namespace std;

class Number
{
private:
    int x, y;

public:
    Number(int a, int b)
    {
        x = a;
        y = b;
    }

    int getMax()
    {
        if (x > y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
};

int main()
{
    Number obj(4, 7);
    cout << "The larger number is: " << obj.getMax();
    return 0;
}
