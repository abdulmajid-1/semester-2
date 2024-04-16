#include <iostream>
using namespace std;

class Grading
{
public:
    int marks;
    string grade;
    Grading(int marks, char grade);
    void show();
};

Grading ::Grading(int marks, char grade)
{
    this->marks = marks;
    this->grade = grade;
}
void Grading ::show()
{
    cout << marks << endl
         << grade << endl;
}

int main()
{
    Grading G1(99, 'A');
    cout << "The marks and grade of 1st student is : \n";
    G1.show();
    Grading G2(88, 'B');
    cout << "The marks and grade of 2nd student is : \n";
    G2.show();
    return 0;
}