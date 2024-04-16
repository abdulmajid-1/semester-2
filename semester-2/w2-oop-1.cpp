#include <iostream>
using namespace std;

int factorial(int a);

int main()
{
    int n;
    int result;
    cout << "Enter a number : ";
    cin >> n;
    result = factorial(n);
    cout << result;
}
int factorial(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result = result * i;
    }
    return result;
}