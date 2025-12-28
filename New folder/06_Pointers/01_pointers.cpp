#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int *p = &n;

    cout << &n << endl;
    cout << p << endl;

    cout << n << endl;
    cout << *p << endl;

    return 0;
}