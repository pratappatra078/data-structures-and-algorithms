// Write a Program to check if a word is palindrome or not using recursion .
#include <iostream>
using namespace std;
bool check_palindrome(string &s, int n)
{
    if (n >= s.size() / 2)
        return true;
    if (s[n] != s[s.size() - n - 1])
        return false;
    return check_palindrome(s, n + 1);
}
int main()
{
    // code here
    string s = "11211";
    int n = s.length();
    cout << check_palindrome(s, 0);
    return 0;
}