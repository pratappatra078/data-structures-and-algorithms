// Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4}, product = 1;
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        product *= arr[i];
    }
    cout << product;

    return 0;
}