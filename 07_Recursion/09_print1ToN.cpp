#include <iostream>
using namespace std;
int i = 0;
void print(int count)
{
    if (i == count)
        return;
    i++;
    cout << i << " ";

    print(count);
}
int main()
{
    int count = 0;
    cout << "Enter The number : ";
    cin >> count;
    print(count);
    return 0;
}