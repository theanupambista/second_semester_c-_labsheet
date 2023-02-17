#include <iostream>

class Clock
{
protected:
    int hours;
    int minutes;
    int seconds;

public:
    Clock()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Clock(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    virtual void setTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    virtual void tick()
    {
        seconds++;
        if (seconds == 60)
        {
            seconds = 0;
            minutes++;
        }
        if (minutes == 60)
        {
            minutes = 0;
            hours++;
        }
        if (hours == 24)
        {
            hours = 0;
        }
    }

    virtual void displayTime()
    {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }
};
class Wall_clock : public Clock
{
private:
    std::string timeZone;

public:
    Wall_clock() : Clock()
    {
        timeZone = "";
    }

    Wall_clock(int h, int m, int s, std::string tz) : Clock(h, m, s)
    {
        timeZone = tz;
    }

    void setTimeZone(std::string tz)
    {
        timeZone = tz;
    }

    void displayTime()
    {
        std::cout << hours << ":" << minutes << ":" << seconds << " " << timeZone << std::endl;
    }
};
int main()
{
    Wall_clock clock1(0, 0, 0, "UTC");
    Wall_clock clock2(0, 0, 0, "PST");
}