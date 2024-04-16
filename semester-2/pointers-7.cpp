#include <iostream>
using namespace std;
struct student
{
    int age;
    string name;
};
int main()
{
    student s1;
    student *pointer;
    s1.name = "majid";
    s1.age = 19;
    pointer = &s1;
    cout << pointer << endl;
    cout << (*pointer).age;
    cout << endl
         << (*pointer).name;
    return 0;
}