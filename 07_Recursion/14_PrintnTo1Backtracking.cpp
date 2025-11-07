// Print n to 1 using backtracking
// Time complexity : 0(n)
// space complexity : 0(n)

#include <iostream>
using namespace std;
void printnTo1(int i, int n)
{
    // set base case
    if (i > n)
        return;
    // call the function
    printnTo1(i + 1, n);
    // print
    cout << i << " ";
}
int main()
{
    // code here
    int n;
    cout << "Enter the number : ";
    cin >> n;
    // call the function
    printnTo1(1, n);
    return 0;
}