#include <iostream>
using namespace std;

class Swapper
{
private:
    int x, y;

public:
    Swapper(int a, int b)
    {
        x = a;
        y = b;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    void swap()
    {
        int temp = x;
        x = y;
        y = temp;
    }
};

int main()
{
    Swapper obj(10, 20);
    cout << "Before swapping: x = " << obj.getX() << ", y = " << obj.getY() << endl;
    obj.swap();
    cout << "After swapping: x = " << obj.getX() << ", y = " << obj.getY() << endl;
    return 0;
}
