// write a program to copy the contents of one array into in reverse order .
#include <iostream>
using namespace std;

int main()
{
    // given array
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // code

    int length = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[length]; // 5

    for (int i = 0; i < length; i++) // 5
    {
        arr2[i] = arr1[length - i - 1];
        cout << arr2[i] << " ";
    }

    return 0;
}