// Task 1:
// Create Class Person with variables weight,height, gender. Create another Class Employee with variables
// designation, HoursPerDay. Now create another class Teacher and inherit it from Person and Employee and
// add function display() which should show all the details related to teacher.

#include <iostream>
using namespace std;

class Person
{
protected:
    float weight;
    float height;
    string gender;
};
class Employee
{
protected:
    string designation;
    int HoursPerDay;
};
class Teacher : public Person, public Employee
{
public:
    void setval()
    {
        weight = 88;
        height = 6.1;
        gender = "Male";
        designation = "Professor";
        HoursPerDay = 6;
    }
    void Display()
    {
        cout << "The weight is : " << weight << endl;
        cout << "The height is : " << height << endl;
        cout << "The gender is : " << gender << endl;
        cout << "The designation is : " << designation << endl;
        cout << "The working hours per day are : " << HoursPerDay << endl;
    }
};
int main()
{
    Teacher t;
    t.setval();
    t.Display();
}