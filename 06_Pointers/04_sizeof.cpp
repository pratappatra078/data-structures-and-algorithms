// how to know memory locations and how many bytes my system take
#include <iostream>
using namespace std;

int main()
{
    // code here
    int x = 20;      // takes 4 byte
    double y = 20.2; // takes 8 byte

    // check size in my system
    cout << "Size of the x is : " << sizeof(x) << endl;
    cout << "Size of the y is : " << sizeof(y) << endl;

    // check which location it take in my system
    cout << "Address of x is : " << &x<<" " << (&x + 1) << endl;
    cout << "Address of y is : " << &y <<" "<< (&y + 1)<<" " << (&y + 2) << endl;
    return 0;
}