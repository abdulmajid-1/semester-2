#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string city;
    void input_data();
    void Display();
    int Getage(int age);
};
void Person ::input_data()

{
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your city : ";
    cin >> city;
}
void Person ::Display()
{
    cout << name << " , " << age << " , " << city << endl;
}
int Person ::Getage(int age)
{
    return age;
}

int main()
{
    int age1, age2;
    Person p1;
    cout << "Enter the data of first person \n";
    p1.input_data();
    age1 = p1.Getage(p1.age);
    Person p2;
    cout << "Enter the data of second person \n";
    p2.input_data();
    age2 = p2.Getage(p2.age);
    if (age1 > age2)
    {
        cout << "The data of older person\n\n";
        p1.Display();
    }
    else if (age2 > age1)
    {
        cout << "The data of older person\n\n";
        p2.Display();
    }
    else
    {
        cout << "both persons have same age \n";
    }
    return 0;
}
