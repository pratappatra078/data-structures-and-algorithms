// write a program to store 10 at every index of 2D matrix with 5 rows and 5 column .

#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    // input all values using loop as all values are same
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 10;
        }
    }
    cout << "Output of array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}