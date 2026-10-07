#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<234<<endl;
     int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;

        if(k<=n) cout<<0<<endl;
        else
        {
            int x = k-n; 
            int ans = x*2;
            cout<<ans<<endl;
        }
    }

    return 0;
}
