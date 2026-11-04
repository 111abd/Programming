#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        string a, b;
        cin >> a >> b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // a.erase(a.begin() + 1);
        // cout << a << " -a, b="<< b << endl;

        int lena = a.length(), lenb = b.length();
        
        for (int i = 0, j = 0; i < a.length() && j < b.length();)
        {

            if (a[i] == b[j])
            {
                a.erase(a.begin() + i);
                b.erase(b.begin() + j);
            }
            else if (a[i] < b[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        // cout << a << a.length() << endl;

        int f = 0;

        if (a.length() == 3 && b.empty())
        {
            if (a == "isx")
            {
                f = 1;
            }
        }
        if (f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
