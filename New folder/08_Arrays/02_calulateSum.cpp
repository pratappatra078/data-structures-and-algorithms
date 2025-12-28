// Calculate the sum of all the elements in the given array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sum = 0;
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}