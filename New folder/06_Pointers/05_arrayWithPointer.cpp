// Note: ptr pointer store first value and ptr2 store second value 
#include <iostream>
using namespace std;

int main()
{
    int arr[2] = {2, 19};
    int *ptr = &arr[0];
    int *ptr2 = &arr[1];
    cout << ptr << " " << *ptr << endl;

    cout << *ptr++ << endl; // This pointer print address and move to next location increase by 4 byte as line execute right to left if there is no parenthesis .
    cout << ptr << " " << ptr2 << endl; 
    cout << arr[0] << " " << arr[1] << endl;

    return 0;
}