// given two number a and b .find a raise to the power b.

#include <iostream>
using namespace std;

int main()
{
    // code here
    int a;
    int b;
    cout << "Enter a and b :";
    cin >> a >> b;
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    cout << ans;

    return 0;
}