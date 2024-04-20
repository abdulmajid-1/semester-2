#include <iostream>
using namespace std;

class Car
{
    string make;
    string model;
    int year;
    string colour;

public:
    string getmake();
    string getmodel();
    int getyear();
    string getcolour();
    void setmake(string Newmake);
    void setmodel(string Newmodel);
    void setyear(int Newyear);
    void setcolour(string Newcolour);
    void display();
};
string Car::getmake()
{
    return make;
}
string Car::getmodel()
{
    return model;
}
int Car::getyear()
{
    return year;
}
string Car::getcolour()
{
    return colour;
}
void Car::setmake(string Newmake)
{
    make = Newmake;
}
void Car ::setmodel(string Newmodel)
{
    model = Newmodel;
}
void Car::setyear(int Newyear)
{
    year = Newyear;
}
void Car::setcolour(string Newcolour)
{
    colour = Newcolour;
}
void Car::display()
{
    cout << make << endl
         << model << endl
         << year << endl
         << colour << endl;
}

int main()
{
    Car car;
    car.setmake("Camary");
    car.setmodel("GLX");
    car.setyear(2009);
    car.setcolour("Blue");
    car.display();

    return 0;
}