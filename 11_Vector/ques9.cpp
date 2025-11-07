// Find the second largest element in a given array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 5, 7, 6, 1, 6, 7};
    int max = INT8_MIN;
    int ans = INT8_MIN;

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= length - 1; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < max && arr[i] > ans)
            ans = arr[i];
    }
    cout << ans;

    return 0;
}
