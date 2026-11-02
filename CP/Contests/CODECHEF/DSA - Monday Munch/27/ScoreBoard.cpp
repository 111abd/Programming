#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;

        int rem = a + b;

        if (c == rem) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
