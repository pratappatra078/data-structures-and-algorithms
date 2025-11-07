// Write a Program to transpose a matrix entered by user .
#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter Row & column : ";
    cin >> row >> column;

    int arr[row][column];
    cout << "Enter the matrix Elements : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    int trans[column][row];
    for (int i = 0; i < column; i++)
    {
        for (int k = 0; k < row; k++)
        {
            trans[i][k] = arr[k][i];
        }
    }
    cout << "The Tranpose matrix is : " << endl;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}