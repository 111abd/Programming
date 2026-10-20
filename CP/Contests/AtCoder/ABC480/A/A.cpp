#include <bits/stdc++.h>
using namespace std;

int main() 
{
 
    string a, b; cin>>a>>b;

    int f=0;
    for(int i=0; i<2; i++)
    {
        if(a[i]=='A' || a[i]=='D')
        {
            if(b[i]=='A' || b[i]=='D') 
            f=1; 
        }       

    }
    if(a[0]=='A' && a[1]=='D')
        {
            
            f=1; 
        }
        else if(b[0]=='A' && b[1]=='D') 
        {
            f=1;
        }
    if(f) cout<<"Yes\n";
    else cout<<"No\n";

    
    
    
    

    return 0;
}
