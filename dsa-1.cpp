#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    int i = 0;
    cout << "Enter : ";
    cin >> n;
    do
    {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    } while (n > 0);
    for (int j = (i - 1); j >= 0; j--)
    {
        cout << arr[j];
    }
    cout << endl;
    return 0;
}