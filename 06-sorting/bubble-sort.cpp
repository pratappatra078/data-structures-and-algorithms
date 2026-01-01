#include <iostream>
#include <algorithm>
using namespace std;
/*
Time Complexity : O(n^2)
Space Complexity : O(1)

*/
void bubbleSort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        bool swapped = false; // this is used to avoid unnecessary swap or check
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