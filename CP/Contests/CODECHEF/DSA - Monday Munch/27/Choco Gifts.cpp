#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    while (n--)
    {
        cin >> a;

        int rem = a % 4;

        if (rem / 2 >= 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
