#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        int a = n;
        int x = a / 2;
        int y = a - x;
        int ans = .5 * 2 * x * y;

        cout << ans << "\n";
    }
    else
    {
        int x = n / 2;
        int ans = .5 * 2 * x * x;

        cout << ans << "\n";
    }
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
