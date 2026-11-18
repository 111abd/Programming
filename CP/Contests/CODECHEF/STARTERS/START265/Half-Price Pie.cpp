#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }

    int dis = 0, mini = 999999999;
    for (int i = 0, j = i + 1; i < n - 1; i++, j++)
    {
        dis = (ar[i] + ar[j]) / 2;
        mini = min(dis, mini);
    }

    //cout << mini << "\n";
    cout << sum - mini << "\n";
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
