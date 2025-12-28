//write a program to reverse an  array .
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 12, 3, 14, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = n - 1;

    while (i < j)
    {
        arr[i] = arr[j] - arr[i] + (arr[j] = arr[i]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}