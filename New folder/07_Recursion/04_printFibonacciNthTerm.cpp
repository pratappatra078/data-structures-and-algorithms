// find the n th turm of fibonacci series .

#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0 or n==1) return n;
    return fibo(n-1) +fibo(n-2);
}
int main() {
    // code here
    cout << fibo(5);
    return 0;
}