/*   task : 04
A parent class cannot access the properties of a child
*/

// task : 05

//  A combination of two or more types of inheritance is called Hybrid inheritance
// here is an example

#include <iostream>
using namespace std;

class livingthing
{
public:
    void growth()
    {
        cout << "living things grow \n";
    }
};
class Human
{
public:
    void gender()
    {
        cout << "male \n";
    }
};
class Majid : public livingthing, public Human
{
public:
    void intro()
    {
        cout << "My name is majid \n";
    }
};
class Profession : public Majid
{
public:
    void P_majid()
    {
        cout << "Majid is a student (maybe)\n";
    }
};
int main()
{
    Profession m;
    m.growth();
    m.gender();
    m.intro();
    m.P_majid();
}