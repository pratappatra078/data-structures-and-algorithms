// Write a program to store the transpose of a matrix given by user.
#include <iostream>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter the row and column : ";
    cin >> row >> column;

    int arr[row][column];
    cout << "Enter Row and Column Data one by one : " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }

    // initialization value insert complete .

    int trans[column][row];

    for (int j = 0; j < column; j++)
    {
        for (int i = 0; i < row; i++)
        {
            trans[j][i] = arr[i][j];
        }
    }
    cout << "The transpose Of The Matrix is  : " << endl;
    for (int j = 0; j < column; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << trans[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}