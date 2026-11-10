#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int time, speed;
    cin >> time >> speed;

    double dist = time * speed;

    double fuel = dist / 12.0;
    cout << (fixed) << setprecision(3) << fuel << endl;
}
int main()
{
    int test_cases = 1;

    while (test_cases--)
    {
        solve();
    }

    return 0;
}
