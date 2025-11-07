#include <bits/stdc++.h>
using namespace std;
// Worst Case O(n^2)
int partition(int arr[],int l,int r,int k){
    int pivot = arr[r];
    int i=l;
    for (int j = l; j < r; j++)
    {
        if(arr[j]<pivot){
            swap(arr[i++],arr[j]);
        }
    }
    swap(arr[i],arr[r]);
    return i;
}

int kThSmallest(int arr[], int l, int r, int k)
{
    if (k > 0 and k <= r - l + 1)
    {
        int position = partition(arr, l, r,k);//position of pivot element
        if (position - l == k - 1)
            return arr[position];

        else if(position -l>k-1){
            return kThSmallest(arr,l,position-1,k);
        }
        else{
            return kThSmallest(arr,position+1,r,k-(position-l+1));
        }
    }
    return 0;
}
int main()
{
    int arr[] = {3, 5, 2, 1, 4, 7, 8, 6};
    int k = 5;
    int r = 8; 
    int l = 0;
    cout << kThSmallest(arr, l, r - 1, k);
    return 0;
}