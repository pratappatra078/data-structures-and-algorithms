#include <bits/stdc++.h>
using namespace std;
/*
Merge Sort -> we devide the aray by 2 parts hypothiacally and do sort and merge them again.
Time Complexity : O(nlogn)
Space Complexity : O(n)
*/
void merge(vector<int> &v,int left,int mid,int right){
    vector<int> temp;
    int l = left;
    int r = mid +1;
    while(l<= mid && r <= right ){
        if(v[l] < v[r]){
            temp.push_back(v[l]);
            l++;
        }
        else{
            temp.push_back(v[r]);
            r++;
        }
    }
    // if right array has completed put all element from right array to temp without check
    while(l<=mid){
        temp.push_back(v[l]);
        l++;
    }
    // if left array has completed put all element from right array to temp without check
    while (r<=right){
        temp.push_back(v[r]);
        r++;
    }
    // this place element at its correct position into the original array
    for (int i = left; i <= right; i++){
        v[i] = temp[i - left];
    } 
}
void merge_sort(vector<int> &v,int left,int right){
    // when only ele left return
    if(left>= right) return;
    int mid = (left+right)/2;
    // call to sort from 0 to mid
    merge_sort(v,left,mid);
    // call to sort from mid +1 to end
    merge_sort(v,mid+1,right);
    // merge result 
    merge(v,left,mid,right);
}
int main() {
    vector<int> v = {3,1,2,4,1,5,2,6,4};
    int n = 9;
    merge_sort(v,0,n-1);
    //print original array
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
    return 0;
}