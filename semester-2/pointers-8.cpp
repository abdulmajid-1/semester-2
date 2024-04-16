#include <iostream>
using namespace std;
struct emp
{
    string name;
    int age;
};
int main()
{
    emp *pointer;
    pointer = new emp;
    (*pointer).name = "hello";
    cout << pointer << endl
         << (*pointer).name << endl;
    (*pointer).age = 22;
    cout << pointer << endl
         << (*pointer).age << endl;
    return 0;
}