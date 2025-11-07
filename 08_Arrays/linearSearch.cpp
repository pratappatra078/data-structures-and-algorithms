// Search if a given element is Present in the array or not .if it is not present then return -1 otherwise return index .

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int key = 60;

    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            ans = i;
            break;
        }
    }
    cout << ans ;
}