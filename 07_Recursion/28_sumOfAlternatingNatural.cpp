// given a number n .find the sum of natural number till n but with alternating sign.
// input : 10 Output: -5
// input : 5 Output : 3

#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 0)
        return 0 ;
    return ((n % 2 == 0) ? -n : n ) + f(n-1);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << f(n);
    return 0;
}