// num = 12 ,k =5
// output : 12 24 36 48 60

#include <iostream>
using namespace std;
void f(int num, int k)
{
    if (k == 0)
        return;
    f(num , k-1);
    cout << num * k << " ";
    return ;
}
int main()
{
    // code here
    int num, k;
    cout << "Enter the number and times: ";
    cin >> num >> k;
    f(num, k);

    return 0;
}