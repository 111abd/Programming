#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == b[i])
        {
            cout << "g";
        }

        else
        {
            cout << "b";
        }
    }
    cout << "\n";
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
