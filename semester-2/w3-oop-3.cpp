#include <iostream>
using namespace std;

class Student
{
    string name;
    int id;
    string address;
    float gpa;

public:
    Student(string n, int ID, string add, float GPA)
    {
        name = n;
        id = ID;
        address = add;
        gpa = GPA;
    }
    string getName()
    {
        return name;
    }

    int getID()
    {
        return id;
    }

    string getAddress()
    {
        return address;
    }

    float getGPA()
    {
        return gpa;
    }

    void setName(string newName)
    {
        name = newName;
    }

    void setID(int newID)
    {
        id = newID;
    }

    void setAddress(string newAddress)
    {
        address = newAddress;
    }

    void setGPA(float newGPA)
    {
        gpa = newGPA;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Address: " << address << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main()
{
    Student student("Majid", 2023266, "muridke,Punjab,Pakistan", 3.75);
    student.printInfo();

    // Modify and print again

    student.setGPA(3.85);
    student.setAddress("Johar town , Lahore , Pakistan");
    student.printInfo();

    return 0;
}
