// lets say we have 4 veriable type int : p,q,r,s
#include <iostream>
using namespace std;

int main()
{
    int p = 10;
    int r = 5;
    int q = 4;
    int s = p - ++r - ++q; // 10 - 6 -5 = -1
    cout << s;
    return 0;
}