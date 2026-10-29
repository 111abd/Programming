#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;

        if (s == 0)
        {
            cout << 0 << endl;
        }
        else if ((s > n * 4) || s < 4)
        {
            cout << -1 << endl;
        }
        else
        {
            int cnt1 = 0, cnt2 = 0, t1 = 0;
            for (int i = 1; i <= n; i++)
            {
                t1 = (i * 4); //cout<<t1<<" t1";
                cnt1++;
                if (t1 > s) break;
            }
            //cout<<endl<<cnt1<<" -cnt1"<<endl;;

            cnt2 = t1 - s; //cout<<cnt2<<" -cnt2"<<endl;

            int ans = cnt1 + cnt2;
            cout << ans<<endl;
        }
    }


    return 0;
}
