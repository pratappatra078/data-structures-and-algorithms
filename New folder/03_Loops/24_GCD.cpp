// Find greatest common devider of two number .
#include <iostream>
#include <algorithm>
using namespace std;
int f(int n, int m)
{
    int greater = max(n,m);
    int smaller = min(n,m);
    for (int i = smaller; i >= 0; i--)
    {
        if((n%i==0)and(m%i==0)) return i;
        
    }
    return 1;
}
int main()
{
    int n, m;
    cout << "Enter n and m : ";
    cin >> n >> m;
    cout << f(n, m);
    return 0;
}