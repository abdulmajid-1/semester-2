// Problem Statement 4:
// Implement a deep copy constructor for a class that represents a school. The School class contains
// a pointers to Student objects say school id pointer, which represent the students enrolled in the
// school. Each Student object has a dynamically allocated array of Course objects, which represent
// the courses that the student is taking. Test your implementation by creating two instances of the
// School class and using the copy constructor to create a deep copy of one of them.

#include <iostream>
using namespace std;

class Student
{
    long *sid;
    string *course_subject;

public:
    Student()
    {
        sid = new long;
        course_subject = new string[3];
    }
    void setter()
    {
        *sid = 2023266946;
        (course_subject[0]) = "maths";
        (course_subject[1]) = "physics";
        (course_subject[2]) = "PF";
    }
    Student(Student &s)
    {
        sid = new long;
        course_subject = new string[3];
        *(sid) = *(s.sid);
        for (int i = 0; i < 3; i++)
        {
            (course_subject[i]) = s.course_subject[i];
        }
    }
    void display()
    {
        cout << "ID is : " << *sid << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << (course_subject[i]) << " is the " << i + 1 << " subject " << endl;
        }
        cout << endl
             << endl;
    }
};
int main()
{
    Student s1;
    s1.setter();
    s1.display();
    Student s2(s1);
    s2.display();
}