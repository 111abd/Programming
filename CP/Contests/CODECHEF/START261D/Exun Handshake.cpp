#include <bits/stdc++.h>

#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        long long int p = 0, res = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            p += a[i];
            res = (p * (p - 1)) / 2;
            if (res > m) break;
            cnt++;

        }
        cout << cnt<<endl;
    }

    return 0;
}
