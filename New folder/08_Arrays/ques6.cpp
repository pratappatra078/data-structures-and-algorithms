// Given an integer n .create an array containing square of all natural numbers till n and print elements of the array.

/*

Example:
If n = 4, natural numbers are 1, 2, 3, 4.
Their squares are 1, 4, 9, 16.
You put them into an array: [1, 4, 9, 16]

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];

    // for saving input in the array
    for (int i = 0; i < n; i++)
    {
        arr[i] = (i + 1) * (i + 1);
        // arr[i] = pow(i + 1, 2);
    }
    // for printing the answers.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}