// Input a string of size n and update all the even positions in the string to character 'a' . consider 0-based indexing .
#include <iostream>
using namespace std;

int main()
{
    string str = "i am pratap patra";
    int length_str = str.length();
    for (int i = 0; i < length_str; i += 2)
    {
        str[i] = 'a';
    }
    cout << str;

    return 0;
}