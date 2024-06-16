// Task 3:
// Create Class Date with variables day,month,year and a function display() and another class Time with
// variables hour,minutes,seconds and a function display(). Now create a third class named Time_Date it will
// inherit from both Classes Date and Time it should have a function display() which will display time and
// date.

#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    Date()
    {
        cout << "Enter day : ";
        cin >> day;
        cout << "Enter month : ";
        cin >> month;
        cout << "Enter year : ";
        cin >> year;
    }
    void display_Date()
    {
        cout << day << " / " << month << " / " << year << endl;
    }
};
class Time
{
    int hour, min, sec;

public:
    Time()
    {
        cout << "Enter hour : ";
        cin >> hour;
        cout << "Enter min : ";
        cin >> min;
        cout << "Enter sec : ";
        cin >> sec;
    }
    void display_Time()
    {
        cout << hour << " : " << min << " : " << sec << endl;
    }
};
class Date_Time : public Date, public Time
{
public:
    void display()
    {
        cout << "The date is : ";
        display_Date();
        cout << "The Time is : ";
        display_Time();
    }
};
int main()
{
    Date_Time t;
    t.display();
}