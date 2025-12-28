#include <bits/stdc++.h>
using namespace std;
/*
Space Complexity: O(n)
Time Complexity: O(n)
*/
float calaulate_value(float num1, float num2, char oper)
{
    if (oper == '^')
    {
        return pow(num1, num2);
    }
    else if (oper == '/')
    {
        return float(num1 / num2);
    }
    else if (oper == '*')
    {
        return num1 * num2;
    }
    else if (oper == '+')
    {
        return num1 + num2;
    }
    else
    {
        return num1 - num2;
    }
    return INT_MIN;
}

int precidence(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '/' or ch == '*')
    {
        return 2;
    }
    else if (ch == '+' or ch == '-')
    {
        return 1;
    }
    else
        return -1;
}

float evealuate(string s)
{
    stack<float> nums;
    stack<char> opera;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==' ') continue;
        if (isdigit(s[i]))
        {
            float val =0;
            while(i<s.size() && isdigit(s[i])){
                val = val *10 + s[i] -'0';
                i++;
            }
            i--;
            nums.push(val);
        }
        else if (s[i] == '(')
        {
            opera.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!opera.empty() && opera.top() != '(')
            {

                char op = opera.top();
                opera.pop();
                float num2 = nums.top();
                nums.pop();
                float num1 = nums.top();
                nums.pop();

                nums.push(calaulate_value(num1, num2, op));
            }
            if (!nums.empty())
            {
                opera.pop();
            }
        }
        else
        {
            while (!opera.empty() && precidence(opera.top()) >= precidence(s[i]))
            {
                char op = opera.top();
                opera.pop();
                float num2 = nums.top();
                nums.pop();
                float num1 = nums.top();
                nums.pop();

                nums.push(calaulate_value(num1, num2, op));
            }
            opera.push(s[i]);
        }
    }
    while (!opera.empty())
    {
        char op = opera.top();
        opera.pop();
        float num2 = nums.top();
        nums.pop();
        float num1 = nums.top();
        nums.pop();

        nums.push(calaulate_value(num1, num2, op));
    }
    return nums.top();
}
int main()
{
    string s ="12+(2 *9)/5+9";
    cout<<evealuate(s);
    return 0;
}