#include <bits/stdc++.h>
using namespace std;

// Problem 1
// Count Digits
void countDigit(int n)
{
    cout << n << endl;
    cout << "size -> " << (int)(log10(n) + 1) << endl;
}

// Problem 2
//  Reverse a number
int reverseNum(int n)
{
    int dup = n;
    int reverseNumber = 0;
    while (dup > 0)
    {
        int temp = dup % 10;
        reverseNumber = reverseNumber * 10 + temp;
        dup /= 10;
    }
    return reverseNumber;
}

// Problem 3
//  check armstrong Number
//  this is for to calculate power of armstrong number
int power_calculate(int x, int y)
{
    if (y == 1)
        return x;
    return x * power_calculate(x, y - 1);
}
// armstrong number calculate
bool armstrongCheck(int n)
{
    int length = (int)(log10(n) + 1);
    int num = 0;
    int dup = n;

    while (dup > 0)
    {
        int lastDigit = dup % 10;
        num += power_calculate(lastDigit, length);
        // cout<<num<<endl;
        dup /= 10;
    }
    return (n == num) ? true : false;
}

// Problem 4
// Print all divisor
void divisorPrint(int n)
{
    vector<int> v;
    // O(sqrt(n))
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }
    // O(n log n)
    sort(v.begin(), v.end());
    // O(n)
    for (auto it : v)
        cout << it << " ";

    // so overall time complexity is O(sqrt(n))
}

// Problem 5
// Prime number Check
// What is Prime number ? -> Prime number is the number which has 2 factor 1 & itself

bool primeCheck(int n)
{
    // Time Complexity O(sqrt(n))
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
// GCD check
// it is a bruit force approach
int greatestCommonDivisor(int n, int m)
{
    int min = (n, m);
    int gcd = 1;
    for (int i = min; i > 1; i--)
    {
        if (n % i == 0 and m % i == 0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}
// using euclidean algorithm
int gcd(int x, int y)
{
    int gcd_answer = 1;
    if (x == 0)
        return gcd_answer = y;
    return gcd(max(x, y) - min(x, y), min(x, y));
}
// striver method
// TC = O(log(min(a,b)))
int gcd_striver_method(int a, int b)
{
    while (a > 0 and b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    else
        return a;
}

int main()
{
    // code here
    cout << gcd_striver_method(625, 25);

    return 0;
}