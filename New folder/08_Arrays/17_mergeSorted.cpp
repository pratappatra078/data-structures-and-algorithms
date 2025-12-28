#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {5, 8, 10};
    int arr2[] = {2, 7, 8};
    int a = sizeof(arr1) / sizeof(arr1[0]);
    int b = sizeof(arr2) / sizeof(arr2[0]);
    int n = a + b;

    int arr3[n];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a and j < b)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while (i < a)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < b)
    {
        arr3[k++] = arr1[j++];
    }

    for (int p = 0; p < n; p++)
    {
        cout << arr3[p] << " ";
    }

    return 0;
}