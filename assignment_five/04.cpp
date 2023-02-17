#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Overload the + operator to add two Time objects
    Time operator+(const Time &t)
    {
        int h = hours + t.hours;
        int m = minutes + t.minutes;
        int s = seconds + t.seconds;

        if (s >= 60)
        {
            m += s / 60;
            s %= 60;
        }
        if (m >= 60)
        {
            h += m / 60;
            m %= 60;
        }

        return Time(h, m, s);
    }

    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main()
{
    Time t1(2, 30, 45);
    Time t2(1, 15, 30);
    Time t3 = t1 + t2;

    cout << "t1: ";
    t1.display();
    cout << "t2: ";
    t2.display();
    cout << "t1 + t2: ";
    t3.display();

    return 0;
}
