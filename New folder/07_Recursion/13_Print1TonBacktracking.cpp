// print 1 to n using backtracking
#include <iostream>
using namespace std;
void backtracking(int n)
{
    // base case
    if (n == 0)
        return;
    // call the function
    backtracking(n - 1);
    // print Function
    cout << n << " ";
    // return
    return;
}
int main()
{
    // code here
    int n;
    cout << "Enter the number : ";
    cin >> n;
    backtracking(n);
    return 0;
}