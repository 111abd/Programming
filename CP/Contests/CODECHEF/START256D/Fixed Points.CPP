#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,k;
cin >> t; 
while(t--)
{
    cin>>n>>k;
    if(n==1)
    {
        if(k>0) cout<<"Yes\n"; else cout<<"No\n";
    }
    else if(n==2)
    {
        if(k==1) cout<<"No\n"; else cout<<"Yes\n";
    }
    else if(n>=3)
    {
        if(n-k==1) cout<<"No\n";else cout<<"Yes\n";
    }

}
}
