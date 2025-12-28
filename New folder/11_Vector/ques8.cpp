// Find the unique number in the given a array where all the elements are being repeated twice with one value being unique

#include <iostream>
using namespace std;

int main()
{
    // code here
    int arr[] = {2, 3, 1, 3, 2, 4, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= length - 2; i++)
    {
        for (int j = i + 1; j <= length - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] != -1)
            cout << arr[i] << " ";
    }

    return 0;
}