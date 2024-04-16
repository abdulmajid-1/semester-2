#include <iostream>
using namespace std;
int main()
{
    int n;
    int check[3];
    int i = 0;
    int count = 0;
    cout << "Enter a number of odd number of digits : ";
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        check[i] = n % 10;
        n = n / 10;
        i++;
    }
    for (int j = 2; j >= 0; j--)
    {

        if (temp % 10 == check[j])
        {
            count++;
        }
        temp = temp / 10;
    }
    if (count == 3)
    {
        cout << "Palindrome ";
    }
    else
    {
        cout << "Not a palindrome ";
    }
    return 0;
}