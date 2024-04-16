#include <iostream>
using namespace std;
int main()
{
    int *p;
    int n = 22;
    p = new int[5];
    for (int i = 0; i < 5; i++)
    {

        p[i] = n;
        cout << &p[i] << endl;
        //  p[5] = 33;
        cout << p[i] << endl;
        n++;
    }
    delete[] p;

    return 0;
}