// p =2,q = 3 Output : 8

#include <iostream>
using namespace std;
int f(int x, int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
    {
        int result = f(x, y / 2);
        return result * result;
    }
    else
    {
        int result = f(x, (y - 1) / 2);
        return x * result * result;
    }
}
int main()
{
    int x, y;
    cout << "Enter Number & The Power : ";
    cin >> x >> y;
    cout << f(x, y);
    return 0;
}