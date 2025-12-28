// Given an integer array 'a',return the prefix sum /running sum in the same array without creating a new array .
#include <iostream>
using namespace std;

int main()
{
    // code here
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = arr[0];

    for (int i = 1; i <= n - 1; i++)
    {
        arr[i] += arr[i - 1];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}