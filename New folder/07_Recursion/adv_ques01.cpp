/*
There are n stones numbered 1,2,3....N .For each i the height of stone i is hi .There is a frog who initially in the first stone .He will repeate the following action some number of times for each N.

If the frog is currently on stone i ,jump to stone i+1 or stone i + 2.Here a cost of |hi-hj| is incurred ,where j is the stone land on .

Find the minimum possible total cost incurred before the frog reach into the N stone .

Input : n = 4
arr[] ={10,30,40,20}
Output : 30
*/

#include <iostream>
using namespace std;

int f(int *arr, int n, int i)
{
    if (i == n - 1)
        return 0;
    if (i == n - 2)
        return (f(arr, n, i + 1) + abs(arr[i] + arr[i + 1]));

    return min(f(arr,n,i+1) + abs(arr[i] - arr[i+1]) ,f(arr,n,i+2) + abs(arr[i] - arr[i+2]));
}

int main()
{
    // code here
    int arr[] = {10, 30, 40, 20};
    int n = 4;
    cout << f(arr, n, 0);
    return 0;
}