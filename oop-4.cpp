// the ability of a class to inherit properties and behaviors from more than one base class is called multiple inheritance.
// here is an example of that

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
int main()
{
    Majid m;
    m.growth();
    m.gender();
    m.intro();
}