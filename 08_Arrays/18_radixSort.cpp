#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int> &v, int pos)
{
    int n = v.size();
    // initialize a vector of size 10
    vector<int> freq(10, 0);
    for (int i = 0; i < n; i++)
        freq[(v[i] / pos) % 10]++;
    // calculating cumulative frequency
    for (int i = 1; i < 10; i++)
        freq[i] += freq[i - 1];
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
        ans[--freq[(v[i] / pos) % 10]] = v[i];
    for (int i = 0; i < n; i++)
        v[i] = ans[i];
}
void radixSort(vector<int> &v, int n)
{
    // max element
    int maxVal = *max_element(v.begin(), v.end());

    for (int pos = 1; (maxVal / pos) > 0; pos *= 10)
        countSort(v, pos);
}
int main()
{
    // code here
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the Elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    radixSort(v, n);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}