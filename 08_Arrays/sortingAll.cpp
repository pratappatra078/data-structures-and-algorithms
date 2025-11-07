#include <bits/stdc++.h>
using namespace std;

// bubble sort
//  Time Complexity = O(n^2) , best case = O(n) as flag stop after 1 iteration
// Space Complexity = O(1)
// stable sorting algorithm
// Use when : Good for small or nearly sorted arrays.
// Situations where stability matters.
void bubblesort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) // this loop only for run
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        if (!flag)
            break;
    }
}

// Selection Sort
// Time complexity : o(n^2)
// space complexity : O(1)
// unstable algorithm
// Use when : Good when swap cost is high and stability is not important.
// Small datasets, or when memory writes should be minimised (e.g., EEPROM or flash memory).
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) // this loop only for run
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }

        if (min != i) // if no element found small than min then no swap 
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

// Insertion Sort
// Time Complexity : O(n^2) Best Case : O(n)
// Space Complexity : O(1)
// Stable algorithm
void insertionSort(int *arr,int n){
    for (int i = 1; i < n; i++)
    {
        int current_element = arr[i];
        int j = i -1 ;
        while(j>=0 and arr[j]>current_element){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current_element;
    }
    
}
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


int partition(int arr[],int first,int last){
    int pivot = arr[last];
    int i = first-1;
    int j = first;
    for ( ; j < last; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);
    return i +1;
    
}

// Quick Sort Code 
// not stable
void quickSort(int arr[],int first,int last){
    // base case
    if (first>=last) return;
    int pi = partition(arr,first,last);
    quickSort(arr,first,pi-1);
    quickSort(arr,pi,last);

}
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}