#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter : ";
    cin >> n;
    int temp = 0;
    int result = 0;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        result = temp + (result * 10);
    }
    cout << result << endl;
}