#include <bits/stdc++.h>
using namespace std;

int rotationOperation(vector<int> &v)
{
    int n = v.size(); // 5
    int lo = 0, hi = n - 1; // 0,4

    //when array is already sorted
    if (v[lo] <= v[hi])
        return -1;

    // when array is rotated
    while (lo < hi)
    {
        // Avoid overflow
        int mid = (lo + hi )/ 2;

        // if mid value is rotating point 
        if (v[mid] > v[mid+1])return mid+1;
        
        if(v[mid]>=v[lo]) lo = mid +1;
        else hi = mid ;
        
    }
    return lo;
}
int main()
{
    vector<int> v = {2, 3, 4, 5, 1};
    cout << rotationOperation(v);
    return 0;
}