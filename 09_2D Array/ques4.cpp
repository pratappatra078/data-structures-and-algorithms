// Write a Program to display multiplication of two matrices entered by user .
#include <iostream>
using namespace std;

int main()
{
    // for matrix 1 declearation and value input
    int row1, column1;
    cout << "Enter the row & column  ";
    cin >> row1 >> column1;
    int arr1[row1][column1];
    cout << "Enter the values  ";

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    // for matrix 2 decleration and value input
    int row2, column2;
    cout << "Enter the row & column  ";
    cin >> row2 >> column2;

    int arr2[row2][column2];
    cout << "Enter the row & column  ";

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    // check if multiplication Possible or not .
    int arr[row1][column2];
    if (row1 != column2)
        cout << "Matrix multiplication is not Possible for this input .";
    else
    {
        // multiplication logic
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                int temp = 0;
                for (int k = 0; k < column1; k++)
                {
                    temp += (arr1[i][k] * arr2[k][j]);
                }
                arr[i][j] = temp;
            }
        }
    }

    // Print the result matrix
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}