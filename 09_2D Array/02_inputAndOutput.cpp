#include <iostream>
using namespace std;

int main()
{
    // Array declearation
    int arr[2][3];
    cout << "Enter Array : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // loop for output
    cout << "The array is  : " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
            if (j + 1 < 3)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}