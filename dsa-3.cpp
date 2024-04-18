#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int check = 0;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            check++;
        }
    }
    if (check == 2)
    {
        cout << "Prime\n";
    }
    else if (n == 1)
    {
        cout << " Prime number \n";
    }
    else
    {
        cout << "not a prime number \n";
    }
}