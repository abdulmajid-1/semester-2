#include <iostream>
using namespace std;

void function_1();
int function_2(int n);
void function_3(int n, char a);

int main()
{
    int n;
    int a;
    char c;
    int number = 0;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Enter a number you want to print a character : ";
    cin >> a;
    cout << "Enter a character : ";
    cin >> c;
    number = function_2(n);
    function_1();
    cout << number << endl;
    function_3(a, c);
    cout << endl;
}
void function_1()
{
    cout << "*****" << endl;
}
int function_2(int n)
{
    int count = 0;
    do
    {
        n = n / 10;
        count++;

    } while (n > 0);
    return count;
}
void function_3(int n, char a)
{
    for (int i = 0; i < n; i++)
    {
        cout << a;
    }
}