#include <iostream>
using namespace std;
int main()
{
    int *p;
    int a = 33;
    int &b = a;
    p = &a;
    cout << p << endl
         << *p << endl;
    *p = 66;
    cout << a << endl;
    b = b * 2;
    cout << b << endl;
    return 0;
}