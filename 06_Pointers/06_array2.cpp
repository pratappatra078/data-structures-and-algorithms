#include <iostream>
using namespace std;

int main()
{
    int arr[2] = {5, 4};

    int *ptr = &arr[0];
    
    cout << (*ptr)++ << endl; // print 5 because it is a dereferencing operation and then after dereferencing value increase the value by 1 
    
    cout << arr[0] << " " << arr[1]; // print  6 and 4

    return 0;
}