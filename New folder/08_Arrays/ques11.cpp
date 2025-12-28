// Given a vector arr[] sorted in increasing order .return an array of square of each number in increasing order .where size of verctor 1 < size < 101.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-5,-3,-1,0,2};
    int squarearr[5];

    int i = 0;
    int j = 4;
    int k = 4;

    while (k >= 0)
    {
        if (abs(arr[i]) > abs(arr[j]))
        {
            squarearr[k] = arr[i] * arr[i];
            i++;
        }
        else
        {
            squarearr[k] = arr[j] * arr[j];
            j--;
        }
        k--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << squarearr[i] << " ";
    }

    return 0;
}