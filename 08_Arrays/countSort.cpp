#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int> &v)
{
    // size of vector 
    int n = v.size();

    // find largest element
    int maximum_element = *max_element(v.begin(), v.end());

    // creating frequency vector
    vector<int> freq(maximum_element + 1,0);
    for (int i = 0; i < n; i++)
        freq[v[i]]++;
    
    // calculative commutative frequency
    for (int i = 1; i < maximum_element + 1; i++) 
        freq[i] += freq[i - 1];

    // answer vector
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
        ans[--freq[v[i]]] = v[i];
    // print all answer
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}
int main()
{
    // initialize and input values
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter all elements : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    // call the function
    countSort(v);
    return 0;
}