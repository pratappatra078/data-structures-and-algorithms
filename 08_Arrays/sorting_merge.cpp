#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int m = mid - l + 1;
    int n = r - mid;

    int arr1[m], arr2[n];
    
    for (int i = 0; i < m; i++)
    {
        arr1[i]= arr[l+i];
    }
    
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[mid+1+i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < m and j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr[k++] = arr2[j++];
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return; 
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
int main()
{
    int n;
    cout << "Enter the length of the array : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter all the elements of the array ...." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}