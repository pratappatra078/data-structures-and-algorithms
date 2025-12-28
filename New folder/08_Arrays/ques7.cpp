// write a program to reverse the array without using an extra array .
#include <iostream>
using namespace std;

int main()
{
    // given array by user
    int arr[] = {1, 2, 3, 4, 5, 6};
    /*
    our plan is to run a for loop from zero to middle of the array and then swap first and last values using temp veriable .
    */
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}