// WAP to print all the ASCII values and their equivalent character using a while loop .
#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i != 256)
    {
        cout << "ASCII Number " << i << "  : " << (char)i << endl;
        i++;
    }
    return 0;
}