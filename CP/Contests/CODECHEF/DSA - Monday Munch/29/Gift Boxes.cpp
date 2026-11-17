#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int a, b;
    cin >> a >> b;

    int tot = a * 3;

    if (b >= tot)
        cout << "YES\n";
    else
        cout << "NO\n";
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
