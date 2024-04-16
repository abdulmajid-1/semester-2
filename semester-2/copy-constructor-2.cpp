#include <iostream>
using namespace std;
class Person
{
    int age;

public:
    Person()
    {
        age = 20;
    }
    Person(int a)
    {
        age = a;
    }
    int getage()
    {
        return age;
    }
};
int main()
{
    Person p1;
    Person p2(45);
    cout << "First age " << p1.getage() << endl;
    cout << "Second age " << p2.getage() << endl;
    return 0;
}