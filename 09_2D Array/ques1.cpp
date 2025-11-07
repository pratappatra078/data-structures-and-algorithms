// Write a program to store roll numbers and marks obtained by 4 students side by side in a matrix .

#include <iostream>
using namespace std;

int main()
{
    int arr[4][2];
    // taking inpute from user
    cout << "Enter the roll & numbers : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing all numbers and values
    cout << "The roll and marks are : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}