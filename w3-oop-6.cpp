/*
eate a class called "Time" to represent a time of day. Each time should have an hour, a minute,
and a second. Implement getter and setter functions for each data member. Add a member function
to print out the time in 12-hour format.
*/
#include <iostream>
using namespace std;
class Time
{
    int hour;
    int minute;
    int second;

public:
    int getHour()
    {
        return hour;
    }

    int getMinute()
    {
        return minute;
    }

    int getSecond()
    {
        return second;
    }

    // Setter functions
    void setHour(int h)
    {
        if (h > 0 && h <= 12)
        {
            hour = h;
        }
        else
        {
            cout << "Invalid hour !" << endl;
        }
    }

    void setMinute(int m)
    {
        if (m > 0 && m <= 60)
        {
            minute = m;
        }
        else
        {
            cout << "Invalid minute ! " << endl;
        }
    }

    void setSecond(int s)
    {
        if (s > 0 && s <= 60)
        {
            second = s;
        }
        else
        {
            cout << "Invalid seconds ! " << endl;
        }
    }
    void display();
};
void Time ::display()
{
    cout << hour << " : " << minute << " : " << second << endl;
}
int main()
{
    Time t;
    t.setHour(1);
    t.setMinute(55);
    t.setSecond(30);
    cout << "Time in 12 hour format : " << endl;
    t.display();
    return 0;
}
