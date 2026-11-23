#include <bits/stdc++.h>
using namespace std;

void solve()
{
    stack<char> st;
    string c;
    cin >> c;

    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] == '#' && !st.empty())
        {
            st.pop();
        }
        else if (c[i] == '#' && st.empty())
        {
            continue;
        }
        else
        {
            st.push(c[i]);
        }
    }

    vector<char> v;

    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(), v.end());

    for (auto i : v)
        cout << i;

    cout << endl;
}
int main()
{
    int test_cases = 1;
    // cin >> test_cases;

    while (test_cases--)
    {
        solve();
    }

    return 0;
}
