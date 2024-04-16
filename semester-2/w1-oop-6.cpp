#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll_num;
    float marks_chemistry;
    float marks_maths;
    float marks_physics;
};
int main()
{
    int k = 0, max = 0;
    int total[3];
    student st[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the data of student no. " << i + 1 << endl;
        cout << "Enter name : ";
        getline(cin, st[i].name);
        cout << "Enter roll number : ";
        cin >> st[i].roll_num;
        cout << "Enter marks in chemistry : ";
        cin >> st[i].marks_chemistry;
        cout << "Enter marks in maths : ";
        cin >> st[i].marks_maths;
        cout << "Enter marks in physics : ";
        cin >> st[i].marks_physics;

        cin.ignore();
    }

    cout << "Name\troll number\tChemistry\tMaths\tphysics\ttotal\taverage\n";

    for (int j = 0; j < 3; j++)
    {
        cout << st[j].name << "\t" << st[j].roll_num << "\t\t";
        cout << st[j].marks_chemistry << "\t\t" << st[j].marks_maths << "\t" << st[j].marks_physics << "\t";
        total[j] = st[j].marks_maths + st[j].marks_chemistry + st[j].marks_physics;
        cout << total[j] << "\t";
        int avg = (st[j].marks_maths + st[j].marks_chemistry + st[j].marks_physics) / 3;
        cout << avg << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        if (total[i] > max)
        {
            max = total[i];
            k++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (k == (i + 1))
        {
            cout << st[i].name << " got the highest numbers " << endl;
        }
    }

    return 0;
}