//write a program to print numbers in  decending order from n to 1 using recursion .

#include <iostream>
using namespace std;
void print(int n)
{
    cout << n << endl;
    if (n == 1)
        return;
    print(n - 1);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    print(n);
    
    return 0;
}