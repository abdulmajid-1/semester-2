#include <iostream>
using namespace std;
struct address
{
    string street, city, state;
    int zipcode;
};
int main()
{
    address student;
    cout << "Enter street : ";
    getline(cin, student.street);
    cout << "Enter city : ";
    getline(cin, student.city);
    cout << "Enter state : ";
    getline(cin, student.state);
    cout << "Enter zipcode : ";
    cin >> student.zipcode;
    cout << "street : " << student.street << endl
         << "city : " << student.city << endl
         << "state : " << student.state << endl
         << "zipcode : " << student.zipcode;
    return 0;
}