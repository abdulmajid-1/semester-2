#include <iostream>
using namespace std;
struct student
{
    int age;
    string name;
    string course;
};

int main()
{
    student majid;
    majid.age = 20;
    majid.name = "majid";
    cout << majid.name << endl
         << majid.age << endl;

    student ali = {24, "Ali", "CS"};
    cout << ali.name << endl
         << ali.age << endl;
    cout << ali.course << endl;

    cout << majid.age;
    return 0;
}