#include <iostream>
using namespace std;
class Data_numbers
{
public:
    int number;
    void in();
    void Out();
};
void Data_numbers ::in()
{
    cout << "Enter a number : ";
    cin >> number;
}
void Data_numbers ::Out()
{
    cout << number << endl;
}
int main()
{
    Data_numbers n;
    n.in();
    n.Out();
}