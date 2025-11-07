#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v, int lo, int hi, int target)
{
    int mid = lo + ((hi - lo) / 2);
    if(v[lo]==target) return lo;
    
    else if(v[mid]>=target) return binarySearch(v,lo,mid-1,target);
    else return binarySearch(v,mid+1,hi,target);
    return -1;
}
int main()
{
    // code here
    vector<int> v = {1, 2, 3, 3, 4, 4, 4, 4, 5, 6, 7,7, 8};
    int low = 0;
    int high = v.size();
    int target = 7;
    cout << binarySearch(v, low, high, target);
    return 0;
}