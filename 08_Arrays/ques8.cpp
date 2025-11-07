// Given two vector arr1 and arr2 of size m and n sorted in increasing order .merge the two array in increasing sorted array size of m +n.
#include <iostream>
using namespace std;

int main()
{
    // first array value input
    int m;
    cout << "Enter First array size : ";
    cin >> m;
    int arr1[m];
    cout << "Enter first array elements : ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    // second array value input
    int n;
    cout << "Enter second array size : ";
    cin >> n;
    int arr2[n];
    cout << "Enter second array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int arr[m + n];

    // main code
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
    for (int i = 0; i < m+n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}