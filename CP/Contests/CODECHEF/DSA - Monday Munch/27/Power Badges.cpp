#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, c;
    cin >> b;
    while (b--)
    {
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0, big_cnt = 0, total = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] <= a[i])
                {
                    cnt++;
                }
                else
                {
                    big_cnt++;
                }
            }
            if (cnt > big_cnt)
                total++;
            cnt = 0, big_cnt = 0;
        }
        cout << total << endl;
        ;
    }

    return 0;
}
