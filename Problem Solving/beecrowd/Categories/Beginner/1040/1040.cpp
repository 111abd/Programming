#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b > c && d > a)
    {
        int sumcd = c + d;
        int sumab = a + b;
        if (sumcd > sumab && c >= 0 && d >= 0)
        {
            if (a % 2 == 0)
            {
                cout << "Valores aceitos\n";
            }
            else cout << "Valores nao aceitos\n";
        }
        else cout << "Valores nao aceitos\n";
    }
    else cout << "Valores nao aceitos\n";
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
