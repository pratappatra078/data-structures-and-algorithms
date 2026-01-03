#include <bits/stdc++.h>
using namespace std;
/*
Quick sort-> used divide & conquer method
Time Complexity : average O(n log n) worst O(n^2)
Space Complexity : O(log n) [ because of call stack ]
*/
int find_pivot(vector<int> &v,int low,int high){
//  Always choosing v[low] can degrade to O(n²) on sorted input
// (Accepted academically, but interviewers prefer randomized/median)
    int pivot = v[low];
    //i is first ,j is last element
    int i = low;
    int j = high;
    while(i<j){
        // if element is less then increase i where i can be max high
        while( i <= high && v[i]<=pivot){
            i++;
        }
        // if element is high then decrease j where j min can be low
        while(j >= low && v[j]> pivot){
            j--;
        }
        // if both not cross each other then swap value 
        if(i<j){
            swap(v[i],v[j]);
        }
    }
    // swap pivot value to it's correct position
    swap(v[low],v[j]);
    // j is the idx where pivot element will go
    return j;
}
void quickSort(vector<int>&v,int low,int high){
    if(low<high){
        int pivot = find_pivot(v,low,high);
        //pivot will return an index where from left all is less then pivot ele. and right are high.
        quickSort(v,low,pivot-1); // call for sorting left again
        quickSort(v,pivot+1,high); // call for sorting right again
    }
}
int main() {
    vector<int>v ={4,6,2,5,7,9,1,3};
    quickSort(v,0,7);
    for(auto it:v )cout<<it<<" ";
    cout<<endl;
    return 0;
}