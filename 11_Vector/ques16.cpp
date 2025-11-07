// check if we can partition the array into two sub-array with equal sum .More formally ,check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array .

#include <iostream>
#include <vector>
using namespace std;
bool checkPartition(vector<int> v)
{
    int total_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        total_sum += v[i];
    }

    int prefix_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;
        if (suffix_sum == prefix_sum)
            return true;
    }
    return false;
}
int main()
{
    // code here
    int n;
    cout << "Enter the length of the array : ";
    cin >> n;
    
    vector<int> v;
    cout << "Enter the elements of the array : ";

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    if( checkPartition(v)) cout << "Exist";
    else cout << "Doesn't Exist ";

    return 0;
}