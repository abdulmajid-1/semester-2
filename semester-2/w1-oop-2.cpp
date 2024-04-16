#include <iostream>
using namespace std;

int main()
{
    int row_1, columns_1;
    cout << "Enter the number of rows of first matrix : ";
    cin >> row_1;
    cout << "Enter the number of columns of first matrix : ";
    cin >> columns_1;
    int arr[row_1][columns_1];
    cout << "Enter the numbers of first matrix : ";
    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < columns_1; j++)
        {
            cin >> arr[i][j];
        }
    }
    int row_2, columns_2;
    cout << "Enter the number of rows of second matrix : ";
    cin >> row_2;
    cout << "Enter the number of columns of second matrix : ";
    cin >> columns_2;
    int str[row_2][columns_2];

    cout << "Enter the numbers of second matrix : ";
    for (int i = 0; i < row_2; i++)
    {
        for (int j = 0; j < columns_2; j++)
        {
            cin >> str[i][j];
        }
    }
    int result[row_1][columns_2];

    for (int i = 0; i < row_1; i++)
    {
        for (int j = 0; j < columns_1; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < row_2; i++)
    {
        for (int j = 0; j < columns_2; j++)
        {
            cout << str[i][j] << "  ";
        }
        cout << endl;
    }
    if (columns_1 == row_2)
    {
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < columns_2; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < columns_1; k++)
                {
                    result[i][j] += arr[i][k] * str[k][j];
                }
            }
        }
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < columns_2; j++)
            {
                cout << result[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "invalid matrix for multiplication ";
    }
}
