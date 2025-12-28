#include <iostream>
using namespace std;

int main()
{
    int arr[2] = {5, 4};

    int *ptr = &arr[0];

    cout << *++ptr << endl; // 6
    cout << ++*ptr << endl; //6
    cout << ++ptr << endl; // 
    
    return 0;
}