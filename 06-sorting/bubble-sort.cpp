#include <iostream>
#include <algorithm>
using namespace std;
/*
Time Complexity : worst case(n^2) best case(n)
Space Complexity : O(1)
bubble sort -> move big element to end 
*/
void bubbleSort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        bool swapped = false; // used to check if array is already sorted and stop early
        for (int j = 0; j < n-i-1; j++){
            //swap only when 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}
int main() {
    int arr[] ={13,46,24,52,20,9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    bubbleSort(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }cout<<endl;
    return 0;
}