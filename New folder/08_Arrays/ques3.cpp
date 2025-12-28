// find the difference between the sum of elements at even indices and to the sum of odd indices .
#include <iostream>
using namespace std;

int main()
{
    // given by user
    int arr[] = {1, 2, 3, 4, 5};
    // code
    int length = sizeof(arr) / sizeof(arr[0]);
    int evenSum = 0, oddSum = 0;
    for (int i = 1; i <= length; i++)
    {
        if (i % 2 != 0)
            oddSum += arr[i - 1];
        else
            evenSum += arr[i - 1];
    }
    cout << "Sum of Odd : " << oddSum << endl
         << "Sum of even : " << evenSum<< endl
         << "Difference : "<< oddSum - evenSum ;
    return 0;
}