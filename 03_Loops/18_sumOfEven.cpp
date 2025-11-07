// WAP to print sum of all even digits in a given number 
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number : ";
    cin >> n;

    while (n > 0)
    {
        int ld = n % 10;
        n /= 10;
        if (ld %2== 0) sum += ld;
        else 
            continue;
        
    }
    cout << "The sum is : " << sum;
    //Complete written by me .
    return 0;
}