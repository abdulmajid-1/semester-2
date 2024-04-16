#include <iostream>
using namespace std;
int swap(int *a, int *b);

int main()
{
    int a = 2;
    int b = 4;
    cout << "before swap " << a << " and " << b << endl;
    cout << &a << " and " << &b << endl;
    swap(&a, &b);
    cout << "after swap " << a << " and " << b << endl;
    cout << &a << " and " << &b << endl;
    return 0;
}
int swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
    return *a, *b;
}