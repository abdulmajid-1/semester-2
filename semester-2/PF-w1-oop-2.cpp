#include <iostream>
using namespace std;
class Marks
{
public:
    int mark1, mark2, mark3;
    void in();
    int sum();
    float avg();
};
void Marks ::in()
{
    cout << "Enter marks in 1st subject : ";
    cin >> mark1;
    cout << "Enter marks in 2nd subject : ";
    cin >> mark2;
    cout << "Enter marks in 3rd subject : ";
    cin >> mark3;
}
int Marks ::sum()
{
    return (mark1 + mark2 + mark3);
}
float Marks ::avg()
{
    int average = (mark1 + mark2 + mark3) / 3;
    return average;
}
int main()
{
    float avg;
    int total;
    Marks student;
    student.in();
    total = student.sum();
    avg = student.avg();
    cout << "The total marks are : " << total << endl;
    cout << "The average of marks is : " << avg << endl;
}