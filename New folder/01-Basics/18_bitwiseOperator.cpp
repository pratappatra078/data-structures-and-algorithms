#include<iostream>
using namespace std;
int main()
{
    int num1 = 5; // 0101

    // bitwise complement (~)
    // cout << (~1) << endl;

    // left shift(<<)
    cout << (num1<<1) << endl; //(101 << 1010) = 5 become 10

    // right shift (>>)
    cout << (num1>>1) << endl;//(1010 >> 101) = 5 become 2

    int num2 = 8;

    // bitwise or (|)
    cout << (num1 | num2) << endl; //(0101 |1000) -> 1101(13)

    // bitwise and(&)
    cout << (num1 & num2) << endl; //(0101 & 1000)-> 0 (0)
    
    // bitwise exclusive or (^)
    /*
    0 ^ 0 -> true
    1 ^ 1 -> true

    otherwise false
    */


}