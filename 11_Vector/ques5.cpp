// find the difference between the sum of elements at even indices and elements at odd indices .
#include <iostream>
using namespace std;

int main()
{
    // code here
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 1; i <= length; i++)
    {
        if (i % 2 != 0)
            sum += arr[i - 1];
        else
            sum -= arr[i - 1];
    }
    cout
        << "Difference : " << sum;

    return 0;
}