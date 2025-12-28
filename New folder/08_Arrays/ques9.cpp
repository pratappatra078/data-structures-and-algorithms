// given a vector arr[] sorted in increasing order of n size and an integer x .find if there exist an array whose sum is exactly x.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array : ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the x value : ";
    cin >> x;

    bool printKoro = false;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            printKoro = true;
            break;
        }
        else if (arr[i] + arr[j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if (printKoro)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}