// Print n to 1
#include <iostream>
using namespace std;
void printNto1(int n)
{
    // set 0 as the base case to exit from the recursion
    if (n == 0)
        return;
    // Print the value 
    cout << n << " ";
    // call the function decreasing the value 
    printNto1(n - 1);
    return;
}
int main()
{
    // take n as input variable 
    int n;
    cout << "Enter the number : "; 
    cin >> n;
    // call the function
    printNto1(n);
    return 0;
}