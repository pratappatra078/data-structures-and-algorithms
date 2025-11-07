// rotate the given array 'a' by k steps,where k is non-negative
// Note : k can be greater than n as well where n is size of array 'a'.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // code here
    // int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int k;
    // cout << "enter k: ";
    // cin >> k;
    // if (k > 9)
    //     k %= 10;
    // int length = sizeof(a) / sizeof(a[0]);

    // while (k > 0)
    // {
    //     int temp = a[length - 1];
    //     for (int i = 0; i < length; i++)
    //     {
    //         a[length - i - 1] = a[length - i - 2];
    //     }
    //     a[0] = temp;
    //     k--;
    // }

    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    k %= v.size();
    int length = v.size();

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    for (int i = 0; i < length; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}