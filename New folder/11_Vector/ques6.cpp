// find the total no of pairs in the given array whose sum is equal to the given value x
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 6, 7, 1};
    int target = 7;
    int length = sizeof(arr) / sizeof(arr[0]);
    int pair = 0;

    for (int i = 0; i < length - 2; i++)
    {
        int find = target - arr[i];
        for (int j = i + 1; j <= length - 1; j++)
        {
            if (arr[j] == find)
            {
                pair++;
                break;
            }
        }
    }
    cout << pair;

    return 0;
}