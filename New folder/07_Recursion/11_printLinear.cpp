// Print values from 1 to n

#include <iostream>
using namespace std;
void print(int i, int j)
{
    if (i > j)
        return;
    cout << i << " ";
    print(i + 1, j);
}
int main()
{
    int lastnumber;
    cout << "Enter the number : ";
    cin >> lastnumber;
    print(1, lastnumber);
    return 0;
}