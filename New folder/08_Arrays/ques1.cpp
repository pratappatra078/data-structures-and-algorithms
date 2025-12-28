/*
given an array of integers , change the values of ites odd indexed elements to its second multiple and increment all even indexed by 10 .
input :
arr[] = {1,2,3,4,5}
output : {10,4,13,8,15}
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int length = sizeof(arr) / 4;
    int outputArr[length];
    for (int i = 1; i <= length; i++)
    {
        if (i % 2 != 0)
        {
            outputArr[i - 1] = arr[i - 1] + 10;
        }
        else
        {
            outputArr[i - 1] = arr[i - 1] * 2;
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << outputArr[i] << " ";
    }

    return 0;
}