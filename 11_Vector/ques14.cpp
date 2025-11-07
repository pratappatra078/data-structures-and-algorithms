// Given an integer array 'a' sorted in non-Decreasing order ,return any array of the squares of each number sorted in non-decreasing order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void squareOfArray(vector<int> &v)
{
    vector<int> ans;
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    int n = right_ptr + 1;
    while (left_ptr < right_ptr + 1)
    {
        if (abs(v[left_ptr]) > abs(v[right_ptr]))
        {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
        else
        {
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }
    }
    reverse(ans.begin(),ans.end());
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    // take size of array
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    // insert values in vector
    vector<int> v;
    cout << "Enter the elements of vector : ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    // call the function to sort and pass the vector's reference to it
    squareOfArray(v);

    return 0;
}