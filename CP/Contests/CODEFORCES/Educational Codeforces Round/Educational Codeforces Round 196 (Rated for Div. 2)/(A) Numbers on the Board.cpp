#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int cnt = 0;
        if (l >= 0 && r >= 0)
        {
            int i = l;
            if (l == 0)
                i = 1;

            for (; i < r; i++)
            {
                cnt++;
            }
            cout << cnt << endl;
            cnt = 0;
        }

        else if (l <= 0 && r <= 0)
        {
            int i = l + 1;
            if (r == 0)
                r = -1;

            for (; i <= r; i++)
            {
                cnt++;
            }
            cout << cnt << endl;
        }

        else if (l < 0 && r > 0)
        {
            int a = abs(l); // a=2,l=-2,r=5

            if (r == a || r == a + 1) //-2 2, -2 3, -2 5
                cout << 0 << endl;
            else
            {
                if (r > a + 1)
                {
                    for (int i = a + 2; i <= r; i++)
                    {
                        cnt++;
                    }
                    cout << cnt << endl;
                }
                else
                {
                    for (int i = a; i > r + 1; i--)
                    {
                        cnt++;
                    }
                    cout << cnt << endl;
                }
            }
        }
    }
    return 0;
}
