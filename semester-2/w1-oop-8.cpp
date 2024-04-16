#include <iostream>
using namespace std;

struct student
{
    string name;
    int id;
};
int main()
{
    student s[2];
    student *p;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter your name ";
        getline(cin, s[i].name);
        cout << "Enter your id : ";
        cin >> s[i].id;
        cin.ignore();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << s[i].name << endl;
        cout << s[i].id << endl;
    }
    p = s;
    p->name = "hello ";
    p->id = 1;
    p++;
    p->name = "Bye";
    p->id = 2;
    for (int i = 0; i < 2; i++)
    {
        cout << s[i].name << endl;
        cout << s[i].id << endl;
    }
}
