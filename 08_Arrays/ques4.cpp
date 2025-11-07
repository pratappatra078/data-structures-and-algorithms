// find the second largest element in the array (given).
#include <iostream>
using namespace std;

int main()
{
    // given by user
    int arr[] = {10,9,80,7,60,5,40,3,20,1};
    // code
    int length = sizeof(arr) / sizeof(arr[0]);

    int larges1st = INT8_MIN;
    int larges2nd = INT8_MIN;
    // find first largest
    for (int i = 0; i < length; i++)
    {
        if (larges1st < arr[i])
            larges1st = arr[i];
    }
    // find second largest
    for (int i = 0; i < length; i++)
    {
        // if array come at the lagest value index it will skip that step.
        if (arr[i] == larges1st)
            continue;
        // store the second largest value .
        if (larges2nd < arr[i])
        {
            larges2nd = arr[i];
        }
    }

    cout << larges2nd;

    return 0;
}