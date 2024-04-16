#include <iostream>
using namespace std;
void arrays_func(int str[], int i, int j);

int main()
{
    int str[5];
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = i + 4;
        }
    }
    arrays_func(str, 5, 5);
}
void arrays_func(int str[], int i, int j)
{
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < j; l++)
        {
            // cout << arr[k][l] << endl;
        }
    }
}