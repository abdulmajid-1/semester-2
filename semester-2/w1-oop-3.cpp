#include <iostream>
using namespace std;

struct rectangle
{
    float length = 0;
    float width = 0;
};
int main()
{
    float area[2];
    float peri[2];
    rectangle r[2];
    for (int i = 0; i < 2; i++)

    {
        cout << "Enter the length of rectangle number " << i + 1 << " : ";
        cin >> r[i].length;
        cout << "Enter the width of rectangle number " << i + 1 << " : ";
        cin >> r[i].width;
    }
    for (int i = 0; i < 2; i++)
    {
        area[i] = r[i].length * r[i].width;
        peri[i] = 2 * (r[i].length + r[i].width);
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "area of rectangle number " << i + 1 << " is " << area[i] << endl;
        cout << "perimeter of rectangle number " << i + 1 << " is " << peri[i] << endl;
    }
    if (area[0] > area[1])
    {
        cout << "The area of 1st rectangle is greater " << endl;
    }
    else if (area[1] > area[0])
    {
        cout << "The area of 2nd rectangle is greater " << endl;
    }
    else
    {
        cout << "they are equal in area " << endl;
    }
    return 0;
}