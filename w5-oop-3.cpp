// Problem Statement 3:
// Implement a deep copy constructor for a class that represents a calendar. The Calendar class
// contains an array of Event, each of event has id, name, start time, and end time. Demonstrate the
// concept of shallow copy and Deep copy by taking event id as a pointer. Test your implementation
// by creating two instances of the Calendar class and using the copy constructor to create a deep
// copy of one of them.
#include <iostream>
using namespace std;

struct Event
{
	int *id;
	string name;
	int stime;
	int etime;
	Event()
	{
		id = new int;
	}
};
class Calendar
{
public:
	Event e[10];

	Calendar()
	{
	}
	Calendar(Calendar &c)
	{
		(e[0].id) = c.e[0].id;
		e[0].name = c.e[0].name;
		e[0].stime = c.e[0].stime;
		// we can see that in deep copy end time will be
		// zero and in shallow copy it will be equal to the first object
		// e[0].etime = c.e[0].etime;
	}
	void setter()
	{
		*(e[0].id) = 2023266;
		e[0].name = "majid";
		e[0].stime = 2;
		e[0].etime = 7;
	}
	void display()
	{
		cout << "The id is : " << *(e[0].id) << endl;
		cout << "The name is : " << e[0].name << endl;
		cout << "The strating time is " << e[0].stime << endl;
		cout << "The ending time is " << e[0].etime << endl
			 << endl
			 << endl;
	}
};
int main()
{
	Calendar c1;
	c1.setter();
	Calendar c2(c1);
	c1.display();
	c2.display();
	Calendar c3;
	c3 = c1;
	c3.display();
}
