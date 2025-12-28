#include <bits/stdc++.h>
using namespace std;

int main()
{
    // code here
    int n;
    cout << "Enter the number of array :";
    cin >> n;

    int arr[n];
    cout << "Enter all array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Pre-computation
    map<int, int> mapp;
    for (int i = 0; i < n; i++)
    {
        mapp[arr[i]]++;
    }
    for (auto it : mapp)
    {
        cout << it.first << "-> " << it.second << endl;
    }

    // using only one loop
    // map<int,int>mapp;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     mapp[arr[i]]++;
    // }

    int q;
    cout << "Enter the number of query : ";
    cin >> q;

    while (q--)
    {
        int num;
        cout << "Enter the number : ";
        cin >> num;
        cout << mapp[num] << endl;
    }

    return 0;
}