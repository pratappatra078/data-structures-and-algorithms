// find th min of all the elements in the given array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 2, 3, 40, 50, 6, 7, 8, 9, 10};
    int min_value = arr[0];
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n; i++)
    {
        // if (min_value > arr[i + 1]) min_value = arr[i + 1];
        min_value = min(min_value,arr[i+1]);// Using in built max function  
    }
    cout << min_value;
    return 0;
}