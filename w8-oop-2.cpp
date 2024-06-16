// Task 2:
// Create Class Person with variables weight,height, gender and functions walk() sit(). Ceate another Class
// Sudent with variable ID,First name, Last name, Graduation and function PrintDetail() Write(). Now create
// a class GraduationStudent with variables UniversityName, YearGraduation and functions Display().
// Note: In both parent classes simply add a cout statement about the task. In child display function show all
// data

#include <iostream>
using namespace std;

class Person
{
protected:
    float weight;
    float height;
    string gender;

public:
    void walk()
    {
        cout << "I am walking " << endl;
    }

    void sit()
    {
        cout << "I am sitting " << endl;
    }
};
class Student
{
protected:
    int ID;
    string fname;
    string lname;
    string graduation;

public:
    void PrintDetail()
    {
        cout << "I am printing details" << endl;
    }
    void Write()
    {
        cout << "I am writing " << endl;
    }
};
class GraduationStudent : public Person, public Student
{
    string uniname;
    int year_of_grad;

public:
    void setval()
    {
        weight = 88;
        height = 7;
        gender = "Male";
        ID = 2023266;
        fname = "Abdul ";
        lname = "Majid";
        graduation = "27/sept";
        uniname = "UMT";
        year_of_grad = 2027;
    }
    void display()
    {
        cout << "Weight is : " << weight << endl;
        cout << "height is : " << height << endl;
        cout << "Gender is : " << gender << endl;
        cout << "ID is : " << ID << endl;
        cout << "First name is : " << fname << endl;
        cout << "Last name is : " << lname << endl;
        cout << "Graduation is on : " << graduation << endl;
        cout << "University name is : " << uniname << endl;
        cout << "Year of graduation is : " << year_of_grad << endl;
    }
};
int main()
{
    GraduationStudent g1;
    g1.setval();
    g1.display();
}