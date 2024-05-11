
#include <iostream>
using namespace std;

class Student
{
    long rollno;
    int marks1;
    int marks2;

public:
    void get()
    {
        cout << "Enter your roll number : ";
        cin >> rollno;
        cout << "Enter marks no  1 : ";
        cin >> marks1;
        cout << "Enter marks no 2 : ";
        cin >> marks2;
    }
    int get1()
    {
        return marks1;
    }
    int get2()
    {
        return marks2;
    }
    long Get3()
    {
        return rollno;
    }
};
class Arts
{
    int artsmarks;

public:
    void getam()
    {
        cout << "Enter your arts marks : ";
        cin >> artsmarks;
    }
    int get3()
    {
        return artsmarks;
    }
};
class Result : public Student, public Arts
{
public:
    void display()
    {
        int total;
        int avg;

        total = (get1() + get2() + get3());
        avg = total / 3;
        cout << "Roll number is : " << Get3() << endl;
        cout << "The total marks are : " << total << endl;
        cout << "The average marks are : " << avg << endl;
    }
};
int main()
{
    Result r1;
    r1.get();
    r1.getam();
    r1.display();
}
