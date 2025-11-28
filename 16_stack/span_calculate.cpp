#include <bits/stdc++.h>
using namespace std;

vector<int> span_of_stock(vector<int> &v)
{
    // 100 80 60 70 60 75 85
    //  1 1 1 2 1 4 6
    reverse(v.begin(), v.end());
    int n = v.size();
    vector<int> ans(n, 1);

    stack<int> st;

    st.push(0);

    // second  to last
    for (int i = 1; i < v.size(); i++)
    {
        while (not st.empty() && v[i] > v[st.top()])
        {
            ans[i] = i-st.top();
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
int main()
{
    // code here
    vector<int> v = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = span_of_stock(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}