// if an array arr contains n elements ,then check if the given array is palindrome or not .
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 23, 2, 1};

    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, j = n - 1;

    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
            continue;
        }
        else
        {
            cout << "it is not a palindrome array .";
            break;
        }
    }
    if (i == n / 2)
        cout << "it is a palindrome array ." << endl;

    return 0;
}