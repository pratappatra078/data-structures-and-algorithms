// Sum of digits .n=1234 Output : 10
#include <iostream>
using namespace std;
int sumOfDigit(int n)
{
    if (n % 10 == n)
        return n;
    return n % 10 + sumOfDigit(n / 10);
}
int main()
{
    // code here
    cout << sumOfDigit(567);
    return 0;
}