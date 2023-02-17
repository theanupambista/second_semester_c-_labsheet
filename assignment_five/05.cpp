#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    Time operator-(Time &t)
    {
        int h, m, s;

        if (seconds < t.seconds)
        {
            seconds += 60;
            minutes--;
        }

        if (minutes < t.minutes)
        {
            minutes += 60;
            hours--;
        }

        h = hours - t.hours;
        m = minutes - t.minutes;
        s = seconds - t.seconds;

        return Time(h, m, s);
    }
};

int main()
{
    Time t1(5, 20, 30);
    Time t2(2, 10, 15);

    Time diff = t1 - t2;

    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}
