#include <iostream>
using namespace std;
int number(int *p);

int main()
{
    int num;
    int *pointer;
    cout << "enter a number : ";
    cin >> num;
    pointer = &num;
    cout << num << "  " << pointer << endl;
    cout << number(pointer);
}
int number(int *p)
{
    cout << p << endl;
    return *p;
}