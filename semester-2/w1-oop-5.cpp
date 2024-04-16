#include <iostream>
using namespace std;
struct emp
{
    string name;
    int id;
    int wage_h;
    int hours_w;
};
int main()
{
    double tpay[5];
    double totalsalary;
    emp e[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the data of user " << i + 1 << endl;
        cout << "Enter name : ";
        getline(cin, e[i].name);
        cout << "Enter id : ";
        cin >> e[i].id;
        cout << "Enter your hourly wage : ";
        cin >> e[i].wage_h;
        cout << "Enter hours worked : ";
        cin >> e[i].hours_w;
        cin.ignore();
    }
    for (int i = 0; i < 5; i++)
    {
        tpay[i] = e[i].wage_h * e[i].hours_w;
        cout << "The total pay of employee " << i + 1 << " is " << tpay[i] << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        totalsalary = tpay[i] + totalsalary;
    }
    cout << "total salary of employees is " << totalsalary;
}