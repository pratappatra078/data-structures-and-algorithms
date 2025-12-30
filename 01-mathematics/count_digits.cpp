// 
//Given an integer n, count how many digits it has.
#include <iostream>
#include <math.h>
using namespace std;
/*
Time Complexity: O(1)
Space Complexity: O(1)
*/
int main(){
    //take user input
    int n ;
    cout << "Enter a number: "; 
    cin >> n;
    //if user enters non-integer
    if(cin.fail()) {
        cout << "Invalid input. Please enter an integer.";
        return 1;
    }
    //if user enters negative number
    if(n < 0) {
        n = -n; // Convert to positive
    }
    //if user enters 0
    if(n == 0) {
        cout << 1; // Special case for 0
        return 0;
    }
    //check number of digits using log10 function
    cout << (int)(log10(n) + 1);
    return 0;
}