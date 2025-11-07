// arr[] ={5,9,11,6,3} output : 34
#include <iostream>
using namespace std;
int f(int *arr, int idx, int n)
{
    if (idx == n - 1)
        return arr[idx];
    return arr[idx] + f(arr, idx + 1, n);
}
int main()
{
    // code here
    int arr[] = {5, 9, 11, 6, 3};
    int n = 5;
    cout << f(arr, 0, n);
    return 0;
}