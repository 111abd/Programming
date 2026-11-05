#include <bits/stdc++.h>
using namespace std;

int main()
{


int n; cin>>n; 
while(n--)
{
int a,b,c; cin>>a>>b>>c;

int big = max({a,b,c}); //cout<<big;
int sml = min ({a,b,c}); //cout<<" "<<sml<<endl;
int cnt=0;
if(a==b || b==c || a==c)
{
    cout<<"0"<<endl;
    continue;
}
else 
{
       
        while(big>sml)
        {
            big--; sml++; cnt++; //cout<<cnt<<endl;
            if(a==big || b==big || big==c || a==sml || b==sml || sml==c)    
    {
        cout<<cnt<<endl;
        break;        
    }
        }
    
}
}


    return 0;
}
