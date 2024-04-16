#include <iostream>
using namespace std;

int sum(int a, int b, int c);

int main()
{
    int v1, v2, v3;

    cout << "Enter a number : ";
    cin >> v1;
    cout << "Enter a number : ";
    cin >> v2;
    cout << "Enter a number : ";
    cin >> v3;
    int result = sum(v1, v2, v3);
    cout << result << endl;
}
int sum(int a, int b, int c)
{
    int result = a + b + c;
    return result;
}