#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    
    for (int i = 0; i  < s.length()-1 && i>=0;)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(s.begin() + i);
        }
        else
        {
            i++;
        }
    }
    //cout << s << endl;
    
    if (s.length() <= k && k <= n)
        cout << "yes\n";
    else
        cout << "no\n";
}
int main()
{
    int test_cases = 1;
    cin >> test_cases;

    while (test_cases--)
    {
        solve();
    }

    return 0;
}
