#include <iostream>
using namespace std;
void f(int n){
    if(n<1)return;
    f(n-1);
    cout << n << " ";
    return;
}

int main() {
    // code here
    int n;
    cout <<"Enter the number : ";
    cin >> n;
    f(n);
    return 0;
}