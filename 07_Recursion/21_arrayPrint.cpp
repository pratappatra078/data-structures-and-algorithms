// Print array in order using recursion
#include <iostream>
using namespace std;
void f(int *arr, int indx, int n)
{
    if (indx == n)
        return;
    cout << arr[indx] << " ";
    f(arr, indx + 1, n);
}
int main()
{
    int size = 5;
    int arr[] = {8, 9, 11, 16, 59};
    f(arr, 0, size);
    return 0;
}