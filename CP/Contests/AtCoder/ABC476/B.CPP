#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<234<<endl;
    int t; cin>>t;
    // while(t--)
    // {
        
    // }
    string a,b; cin>>a>>b;

    for(int i=0; i<t; i++)
    {
        if(b[i]=='*') b[i]=a[i];
    }
    //cout<<a<<" "<<b<<endl;

    if(a==b) cout<<"Yes\n";
    else cout<<"No\n";
    
    

    return 0;
}
