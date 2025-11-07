#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of array : ";
    cin >> n;

    int arr[n];
    map<int, int> mapp;
    cout << "Enter all the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mapp[arr[i]]++;
    }
    for (auto it : mapp)
    {
        cout << it.first << "-> " << it.second << endl;
    }
}
