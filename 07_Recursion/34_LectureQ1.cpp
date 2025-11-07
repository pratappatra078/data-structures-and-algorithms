#include <bits/stdc++.h>
using namespace std;

void f(string &s, vector<string> &result, int i, string str)
{
    if (i == s.length())
    {
        result.push_back(str);
        return;
    }
    f(s, result, i + 1, str + s[i]);
    f(s, result, i + 1, str);
}
int main()
{
    string s = "abc";
    vector<string> result;
    int i = 0;
    string str = "";
    f(s, result, i, str);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}