#include <bits/stdc++.h>
using namespace std;
/*
selection sort -> take element and place in correct position by swaping 
Time Complexity : Best case -> O(n)
                  average and worst case -> O(n^2)
space Complexity: O(1)
*/
void insertionSort(int arr[],int n){
    for (int i = 0; i < n; i++){
        int j = i;
        while(j>0 and arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main() {
    int arr[]= {14,9,15,12,6,8,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }cout<<endl;
    return 0;
}