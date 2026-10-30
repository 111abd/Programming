#include <iostream>

#include <bits/stdc++.h>

using namespace std;
int main()
{

    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        string a;cin >> a;

        int len = a.length();
        int cnt = 0, ans = 0;
        char prev = a[0];

        for (int i = 0; i < len; i++)
        {

            if (i == 0)
            {
                prev = a[0];
            }
            else {
                prev = a[i - 1];
            }

            if (a[i] == prev)
            {
                cnt++;
                if (cnt == 3)
                {
                    ans++;
                    cnt = 0;
                }
            }
            else {
                cnt = 1;
            }

        }

        cout << ans << endl;
    }

    return 0;
}
