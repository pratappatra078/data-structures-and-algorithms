// Return the total number of digits in a number without using any loop .
// hint: using inbuilt to_string() function.

#include <iostream>
using namespace std;

int main()
{
    int x = 1516;
    string str = to_string(x);
    cout << str.length();
    return 0;
}
// to_string -> it is a function used to convert any interger into string .