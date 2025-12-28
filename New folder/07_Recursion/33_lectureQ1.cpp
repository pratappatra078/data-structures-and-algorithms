#include <bits/stdc++.h>
using namespace std;
// Question - 01
// find element inside an array if exist then return index if doesn't then return -1
int findElement(int arr[], int n, int i, int find)
{
    if (i == n)
        return -1;
    if (arr[i] == find)
        return i + 1;
    findElement(arr, n, i + 1, find);
}
int main()
{
    // code here
    return 0;
}