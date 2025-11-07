// This is callled as pass by reference .
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5;
    int y = 10;
    cout << "Before " << x << " " << y << endl;

    swap(&x, &y);
    cout << "After " << x << " " << y << endl;
    return 0;
}