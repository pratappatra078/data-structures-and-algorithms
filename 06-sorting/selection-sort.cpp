#include <bits/stdc++.h>
using namespace std;
/*
selection sort -> select small element from rest of the array and swap
Time complexity: O(n^2)
Space complexity: O(1)
*/
void selection_sort(vector<int> &arr){
    //calculate length of array
    int n = arr.size();
    for (int i = 0; i < arr.size() - 1; i++){
        // found minimum from rest of the array
        int min_idx = i;
        for (int j = i + 1; j < arr.size(); j++){
            // when ever found small save the index
            if (arr[min_idx] > arr[j]){
                min_idx = j;
            }
        }
        // swap operation
        if (min_idx != i){
            swap(arr[min_idx],arr[i]);
        }
    }
}
int main(){
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    // expected ans = {9,13,20,24,46,52}
    selection_sort(arr);
    for (auto it : arr){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}