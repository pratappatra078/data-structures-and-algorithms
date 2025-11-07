// write  a Program to reverse an array using recursion

#include <iostream>
using namespace std;

void reverse_array(int arr[], int f, int r)
{
    if (f >= r)
        return;
    swap(arr[f], arr[r]);
    reverse_array(arr, f + 1, r - 1);
    return;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    reverse_array(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}