#include <iostream>
using namespace std;

class Number
{
private:
    int x, y, z;

public:
    Number(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    int getMax()
    {
        if (x > y && x > z)
        {
            return x;
        }
        else if (y > z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
};

int main()
{
    Number num(10, 20, 30);
    cout << "Largest number is: " << num.getMax() << endl;
    return 0;
}
