#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int f = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        int t = i * 2;
        int sum = i + t;
        if (sum == n)
        {
            f = 1;
            break;
        }
    }
    if (f)
        cout << "yes\n";
    else
        cout << "no\n";
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
