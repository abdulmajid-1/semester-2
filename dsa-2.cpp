#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int result = 0;
    int k = 0;
    int n;
    cout << "enter the length of your binary number ";
    cin >> n;
    int arr[n];
    cout << "enter a number in binary : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = (n - 1); i >= 0; i--)
    {
        result = (arr[i] * (pow(2, k))) + result;
        k++;
    }
    cout << "The entered number in binary is " << result << " in decimal \n";
}