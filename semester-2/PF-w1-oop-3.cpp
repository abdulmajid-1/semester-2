#include <iostream>
using namespace std;

class Numbers
{
public:
    int n1, n2;
    Numbers();
    int avg();
};
Numbers ::Numbers()
{
    // cout << "This is constructor " << endl;
    n1 = 50;
    n2 = 50;
}
int Numbers ::avg()
{
    return (n1 + n2) / 2;
}

int main()
{
    int result;
    Numbers num;
    result = num.avg();
    cout << "The average is " << result << endl;
}