#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 60, 70, 80, 9};
    int mn = INT8_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mn = min(mn, arr[i][j]);
        }
    }
    cout << mn;

    return 0;
}