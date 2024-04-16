#include <iostream>
using namespace std;
int main()
{
    int val = 55;
    int *pointer;
    int *p;
    pointer = &val;
    p = pointer;
    cout << val << endl
         << pointer << endl;
    cout << *pointer << endl
         << pointer << endl;
    cout << p << endl
         << pointer << endl
         << &val << endl;
    cout << *p << endl
         << &p;
    return 0;
}