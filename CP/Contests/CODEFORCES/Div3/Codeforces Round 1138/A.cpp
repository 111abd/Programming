#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, a, b;
    cin >> l >> a >> b;

    vector<int> v1 = {0}, v2 = {0};
    int i = 1;
    while (1)
    {
        int sum = (i * a) % l;
        if (sum == 0)
            break;
        v1.push_back(sum);
        i++;
    }
    i = 1;
    while (1)
    {
        int sum = (i * b) % l;
        if (sum == 0)
            break;
        v2.push_back(sum);
        i++;
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int lena = v1.size(), lenb = v2.size(), ans = 0;

    for (int i = 0; i < lena; i++)
    {
        for (int j = 0; j < lenb; j++)
        {
            if (v1[i] == v2[j])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
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
