#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    
    string a,b; cin>>a>>b;

    for(int i=0; i<t; i++)
    {
        if(b[i]=='*') b[i]=a[i];
    }  

    if(a==b) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}
