#include <bits/stdc++.h>
using namespace std;

// question - 02
// given an array of integers ,print sum of all subsets in it .output sums can be print in any order.

void subsetSum(int *arr, int index, int sum, vector<int> &v, int size)
{
    if (index == size)
    {
        v.push_back(sum);
        return;
    }
    subsetSum(arr, index + 1, sum + arr[index], v, size);
    subsetSum(arr, index + 1, sum, v, size);
}
int main()
{
    int arr[] = {2, 4, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    int sum = 0;
    vector<int> v;

    subsetSum(arr, index, sum, v, size);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}