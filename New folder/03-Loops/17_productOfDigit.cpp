// WAP to print the product of digits .
#include <iostream>
using namespace std;

int main()
{
    int n, product = 1;
    cout << "Enter the number : ";
    cin >> n;

    while (n > 0)
    {
        int ld = n % 10;
        n /= 10;
        if (ld == 0)
            continue;
        product *= ld;
    }
    cout << "The Product is : " << product;
    //Complete written by me .
    return 0;
}