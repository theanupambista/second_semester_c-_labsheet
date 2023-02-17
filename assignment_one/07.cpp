#include <iostream>
using namespace std;

int main()
{
    int timeInSeconds, hours, minutes, seconds;

    cout << "Enter time in seconds: ";
    cin >> timeInSeconds;

    hours = timeInSeconds / 3600;
    timeInSeconds %= 3600;
    minutes = timeInSeconds / 60;
    seconds = timeInSeconds % 60;

    cout << "Time in hours, minutes, and seconds: " << hours << " hour(s) " << minutes << " minute(s) " << seconds << " second(s)" << endl;

    return 0;
}
