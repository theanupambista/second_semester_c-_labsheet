#include <iostream>
using namespace std;

int main()
{
    float principal, time, rate, interest, amount;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the time period in years: ";
    cin >> time;

    cout << "Enter the rate of interest: ";
    cin >> rate;

    interest = (principal * time * rate) / 100;
    amount = principal + interest;

    cout << "The simple interest is: " << interest << endl;
    cout << "The amount is: " << amount << endl;

    return 0;
}
