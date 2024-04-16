#include <iostream>
using namespace std;
int main()
{
    int m = 0;
    int a[] = {33, 2, 3, 4, 56, 4, 3};
    for (int i : a)
    {
        cout << "hello \n";
        cout << a[m] << endl;
        cout << i << endl;
        m++;
    }
    return 0;
}