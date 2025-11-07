// arr[] ={50,20,60,90} output : 90

#include <iostream>
using namespace std;

int f(int *arr, int idx, int n)
{
    if (idx == n - 1)
        return arr[idx];
    return max(arr[idx], f(arr, idx + 1, n));
}
int main()
{
    // code here
    int arr[] = {9, 5, 6, 11, 6, 9, 1, 6, 8};
    int n = 9;
    cout << f(arr, 0, n);
    return 0;
}