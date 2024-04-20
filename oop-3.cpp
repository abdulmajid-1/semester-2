// task : 03
// this is an example of multilevel inheritance where a derived class is created from another derived class.

#include <iostream>
using namespace std;

class Human
{
protected:
    void age()
    {
        cout << "What's your age ?\n";
    }
};
class Majid : protected Human
{
protected:
    void mage()
    {
        cout << "I am 19 ! \n";
    }
};
class Introduction : private Majid
{
public:
    void intr()
    {
        age();
        mage();
        cout << "And that's my introduction \n";
    }
};
int main()
{
    Introduction m;
    m.intr();
}