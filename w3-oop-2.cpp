#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    int length_getter();
    void length_setter(int l);
    int width_getter();
    void width_setter(int w);
    int area();
};
int Rectangle ::length_getter()
{
    return length;
}
void Rectangle ::length_setter(int l)
{
    length = l;
}
int Rectangle ::width_getter()
{
    return width;
}
void Rectangle ::width_setter(int w)
{
    width = w;
}
int Rectangle ::area()
{
    return (length * width);
}
int main()
{
    Rectangle r;
    r.length_setter(7);
    r.width_setter(9);
    cout << "The area of the rectangle is : " << r.area() << endl;
    return 0;
}