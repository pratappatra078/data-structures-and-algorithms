// finout second smallest number from an array (given).
#include <iostream>
using namespace std;

int main()
{
    // given
    int arr[] = {1, 20, 3, 40, 5, 60, 7, 80, 9, 10};
    // code
    int length = sizeof(arr) / sizeof(arr[0]);
    int mn = INT8_MAX;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] < mn)
            mn = min(arr[i], mn);
    }
    int mn2 = INT8_MAX;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == mn)
            continue;

        if (arr[i] < mn2)
            mn2 = min(arr[i], mn2);
    }

    cout << mn2;

    return 0;
}