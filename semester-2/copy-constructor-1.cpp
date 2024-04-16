#include <iostream>
using namespace std;

class Student
{
    int id;

public:
    Student(int a)
    {
        id = a;
    }
    Student(Student &x)
    {
        id = x.id;
    }
    void display()
    {
        cout << "Value of x " << id << endl;
    }
};

int main()
{
    Student a(100);
    Student b(a);
    Student c = a;
    cout << "Value of first object is " << endl;
    a.display();
    cout << "Value of second object is " << endl;
    b.display();
    cout << "Value of third object is " << endl;
    c.display();
}