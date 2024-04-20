// task : 02
// using different data members

#include <iostream>
using namespace std;

class Edibles
{
private:
    string name;

public:
    void what()
    {
        cout << "give examples of edibles \n";
    }
    string getter_edi()
    {
        return name;
    }
    void setter_edi(string n)
    {
        name = n;
    }
};
class Veges : public Edibles
{
public:
    void cucumber()
    {
        string N;
        cout << "enter a vegetable : ";
        cin >> N;
        setter_edi(N);
    }
    void ex_veges()
    {
        cout << "The example of something that is edible is " << getter_edi() << endl;
    }
};
int main()
{
    Veges v;
    v.what();
    v.cucumber();
    v.ex_veges();
}