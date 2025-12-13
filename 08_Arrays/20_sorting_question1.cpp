// Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.
// Input:
// 0 5 0 3 4 2
// Output:
// 5 3 4 2 0 0
// Time Complexity :
// worst case : O(n^2)  best case : O(n) average case : O(n^2)
//  Time complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

void swapZerosToTheEnd(int *arr, int len)
{
    for (int i = 1; i < len; i++)
    {
        if (arr[i] != 0)
        {
            int current_element = arr[i];
            int j = i - 1;
            while (arr[j] == 0)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = current_element;
        }
    }
}

int main()
{
    int len;
    cout << "Enter the length of the array : ";
    cin >> len;
    int arr[len];
    cout << "Enter all the elements ....." << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    swapZerosToTheEnd(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}