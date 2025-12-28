// find th max of all the elements in the given array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 40, 50, 6, 7, 8, 9, 10};
    int mx = arr[0];
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n; i++)
    {
        // if (mx < arr[i + 1]) mx = arr[i + 1];
        mx = max(mx,arr[i+1]);// Using in built max function 
    }
    cout << mx;
    return 0;
}