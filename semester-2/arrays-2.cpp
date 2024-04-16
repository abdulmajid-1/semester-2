#include <iostream>
using namespace std;
int main()
{
    // char arr[5] = {'a', 'b', 'c', 'd'};
    string arr = "hello";
    cout << arr.length() << endl;
    cout << sizeof(arr) << endl;
    cout << arr.empty() << endl; // empty is function to check a string is empty or not
    return 0;
}