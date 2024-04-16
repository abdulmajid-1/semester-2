#include <iostream>
using namespace std;

struct person
{
    string name;
    int age;
};
struct person data(person p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        p[i].name = "majid";
        p[i].age = i + 10;
    }
    for (int i = 0; i < size; i++)
    {
        cout << p[i].name << "  " << p[i].age << endl;
    }
    cout << endl;

    return p[1], p[2];
}

int main()
{
    person p[5];
    person temp[5];
    temp[1] = data(p, 5);
    cout << temp[1].name << "  " << temp[1].age << endl;
}