#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
};

void func(Person *p)
{
    (*p).name = "Haider";
    (*p).age = 29;
}

int main()
{
    Person person;
    person.name = "Umer";
    person.age = 20;

    func(&person);

    cout << person.name << endl;
    cout << person.age << endl;

    return 0;
}
