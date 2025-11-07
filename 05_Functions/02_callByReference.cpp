/*
call by reference means change the value going at its place or location and call by value means take the value only and do operation on it .
*/
#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    x = y + x - (y = x);
}
int main()
{
    int n;
    cout << "Enter a : ";
    cin >> n;
    int p;
    cout << "Enter b : ";
    cin >> p;
    swap(n, p);
    cout << n << " " << p;

    return 0;
}