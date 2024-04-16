#include <iostream>
using namespace std;
void number(int &ref);

int main()
{
    int num = 4453;
    cout << num << endl;
    number(num);
    cout << num;
    return 0;
}
void number(int &ref)
{
    cout << ref + 10 << endl;
    cout << ref * 0 << endl;
    cout << ref / 10 << endl;
    ref = 0;
}