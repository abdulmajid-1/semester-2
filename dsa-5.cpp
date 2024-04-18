#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "enter ";
    cin >> n;
    int org = n;
    int result = 0;
    int temp = 0;
    while (n > 0)
    {
        temp = n % 10;
        result = result + (pow(temp, 3));
        n = n / 10;
    }
    if (result == org)
    {
        cout << "The given number is a armstrong number ";
    }
    else
    {
        cout << "It is a normal number ";
    }
}