#include <iostream>
using namespace std;

struct person
{
    string name;
    int salary;
};

void function_by_value(person p);
void function_by_reference(person *p);

int main()
{
    person p;
    p.name = "majid";
    p.salary = 9000;
    cout << p.name << endl
         << p.salary << endl;
    function_by_value(p);
    cout << p.name << endl;
    function_by_reference(&p);
    cout << p.name << endl;
}
void function_by_value(person p)
{
    p.name = "Ali";
}
void function_by_reference(person *p)
{
    p->name = "khan";
}