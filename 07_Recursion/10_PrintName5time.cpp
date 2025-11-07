// Print name N times by backtracking 

// Time Complexity -> 0(n)
// Space Complexity -> 0(n) 
// Note : Because until i become greater than n it store all in the callstack
#include <iostream>
using namespace std;
void printNtimes(int i, int n)
{
    if (i > n)
        return;
    cout << "Pratap" << endl;
    
    printNtimes(i+1, n);
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    printNtimes(1, n);

    return 0;
}