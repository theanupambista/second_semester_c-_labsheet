#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex() {}
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    Complex operator-(Complex const &obj)
    {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
    void print()
    {
        cout << real << " - i" << imag << endl;
    }
};

int main()
{
    Complex num1(3, 5), num2(1, 2);
    Complex diff = num1 - num2;
    diff.print();
    return 0;
}
