#include <iostream>
#include <fstream>
using namespace std;

class Item
{
private:
    int code;
    float price;

public:
    Item(int c = 0, float p = 0.0)
    {
        code = c;
        price = p;
    }
    void getData()
    {
        cout << "Enter code: ";
        cin >> code;
        cout << "Enter price: ";
        cin >> price;
    }
    void putData()
    {
        cout << "Code: " << code << "\tPrice: " << price << endl;
    }
};

int main()
{
    Item item;
    ofstream fout("item.dat", ios::out | ios::binary);

    for (int i = 0; i < 5; i++)
    {
        item.getData();
        fout.write((char *)&item, sizeof(item));
    }
    fout.close();

    return 0;
}
