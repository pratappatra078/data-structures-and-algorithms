#include <iostream>
using namespace std;
int swap(int x, int y)
{
    // Using third veriable.
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << a << " " << b;
    cout << "After swaping values are : ";
    x = y + x - (y = x);
    cout << x << " " << y;
}
int main()
{
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;
    swap(a, b);
    return 0;
}