// Remove all the occerrance of 'a' from the string "abcax"     output : "bcx"

#include <iostream>
using namespace std;

string f(string s, int idx, int n)
{
    if (idx == n)
        return "";
    
    string str = "";
    str += s[idx];

    return ((s[idx] == 'a') ? "" : str) + f(s, idx + 1, n);
}

int main()
{
    // given string 
    string s = "abcax";
    int n = s.size(); // size calculate
    cout << f(s, 0, n);
    return 0;
}