// write  a Program to reverse an array using recursion

#include <iostream>
using namespace std;

void reverse_array(int i,int arr[], int n)
{
    if (i >= n/2)
        return;
    
    swap(arr[i], arr[n-i -1]);
    
    return;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

   
    for (int i = 0; i < n; i++)
    {
        reverse_array(i,arr,n);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }


    return 0;
}