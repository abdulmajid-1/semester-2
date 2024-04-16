#include <iostream>
using namespace std;

inline void AREA(int r);

int main()
{
    int r;
    cout << "Enter the radius of circle : ";
    cin >> r;
    AREA(r);
}
inline void AREA(int r)
{
    cout << (3.14 * r * r);
}