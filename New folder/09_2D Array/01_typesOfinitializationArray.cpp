//how to declear and initilise an 2d array .
#include <iostream>
using namespace std;

int main()
{
    // all methods are currect .
    int arr[4][2] = {{10, 20}, {30, 40}, {50, 60}, {70, 80}};
    int arr1[4][2] = {10, 20, 30, 40, 50, 60, 70, 80};
    int arr2[][2] = {10, 20, 30, 40, 50, 60}; // autometically distribute all elements by the row indices numbers .
    return 0;
}