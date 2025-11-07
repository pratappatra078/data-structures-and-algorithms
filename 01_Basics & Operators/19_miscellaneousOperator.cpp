#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    char s = 's';
    float f = 101.0;
    bool funct = true;

    //sizeof operator 
    cout <<sizeof(a) << endl; // 4 bytes
    cout << sizeof(s) << endl; // 1 byte
    cout << sizeof(f) << endl; // 4 byte
    cout << sizeof(funct) << endl; // 1 byte

    //ternary operator (conditon)? if true :if false
    a > 10 ? cout << "true":cout << "false" ; // false 
    
    // comma separated operator 
    int x =(5,6,7,8,9,10);
    // the last value will assign to it 
    cout << endl << x << endl; // 10

    // dot and arrow operator 

    // casting operator 
    float p = 10.2;
    cout << int(p) << endl;

    // address operator (&)
    cout << &p << endl; // print the location of p
    
    // pointer  operator(*)
    
    return 0;
}