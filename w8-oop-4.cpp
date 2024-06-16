// Task 4:
// Create class named shape with variables height and width. Create another class named color with variable
// color_name. Now create third class named Rectangle with variable area. Inherit rectangle class from shape
// class and color class. Now calculate area of rectangle and define color of rectangle as well.

#include <iostream>
using namespace std;

class Shape
{
protected:
    float height, width;

public:
    Shape()
    {
        cout << "Enter height : ";
        cin >> height;
        cout << "Enter width : ";
        cin >> width;
    }
};
class Colour
{
protected:
    string colour_name;
};
class Rectangle : public Shape, public Colour
{
    float area;

public:
    void Calculate_Area()
    {
        area = height * width;
    }
    void setcolour()
    {
        cout << "What colour do you want the rectangle to be  : ";
        cin >> colour_name;
    }
    void display()
    {
        cout << "\nArea is : " << area << endl;
        cout << "The colour of the rectangle is " << colour_name << endl;
    }
};
int main()
{
    Rectangle r;
    r.Calculate_Area();
    r.setcolour();
    r.display();
}