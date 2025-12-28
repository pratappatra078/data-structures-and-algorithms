// given a vector arr[] in increasing order of n size and an integer x , find if there exist a pair in the array whose absolute difference is excatly x.

#include <iostream>
using namespace std;

int main()
{
    // code here
    int arr[5] = {-6, -5, 2, 4, 5};
    int x = 2;
    int n = 5;

    bool found = false;
    int i = 0;
    int j = 1;

    while (i < n and j < n)
    {
        if (abs(arr[i] - arr[j]) == x)
        {
            found = true;
            break;
        }
        else if (abs(arr[i] - arr[j]) > x)
            i++;
        else
            j++;
    }


    if (found)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}