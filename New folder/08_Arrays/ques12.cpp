// Given a vector arr[] sorted in increasing order of n size and an integer x .find the nuber of unique pairs that exist in the array whose absolute sum is exactly same .

#include <iostream>
using namespace std;

int main()
{
    // code here
    int arr[] = {1,2,3,4,6};
    int x = 7;

    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int count = 0;

    int j = size - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] > x)
        {
            j--;
        }
        else if (arr[i] + arr[j] < x)
        {
            i++;
        }
        else
        {
            count++;
            i++;
            j--;
        }
    }
    cout << count;

    return 0;
}