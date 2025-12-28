//write a  program to transpose the entered 2:3 array .
#include <iostream>
using namespace std;

int main()
{
    int arr[2][3];
    cout << "Enter Array : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Transpose Of the array is :" << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            cout << arr[i][j];
            if (i + 1 < 2)
                cout << " "; 
        }
        cout << endl;
    }
    return 0;
}