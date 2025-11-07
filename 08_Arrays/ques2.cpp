
// count the numbers of elements in given array greater than a given number x.
/*
explain :
arr[] ={10,2,0,60,5,9,20,45}
x = 15
output: {60,20,45}
*/
#include <iostream>
using namespace std;

int main()
{
    // given by user
    int x = 15;
    int arr[] = {10, 2, 0, 60, 5, 9, 20, 45};

    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > x)
            count++;
    }

    int outputArr[count];
    int j = 0;

    for (int i = 0; i < length; i++)
    {

        if (arr[i] > x)
        {
            outputArr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << outputArr[i] << " ";
    }

    return 0;
}