#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        
        int n,k; cin>>n>>k;

    int j=2,ans=0,cnt=0,check=k;
    for(int i=1; ; i++)
    {
        if(i!=check)
        {
            cnt++; 
            // cout<<cnt<<"-cnt,i-"<<i<<",j-"<<j<<", check="<<check<<"-1nd"<<endl;
        }
        else if(i==check)
        {
             check=k*j; j++; 
            //   cout<<cnt<<"-cnt,i-"<<i<<",j-"<<j<<", check="<<check<<"-2nd"<<endl;
        }

        if(cnt==n){
            ans=i; 
            // cout<<cnt<<"-cnt,i-"<<i<<",j-"<<j<<", check="<<check<<"-3nd"<<endl;
            break; 
        }
    }
    
    if(n<k){cout<<n<<endl;}
    else {cout<<ans<<endl;}
    }
    
    
    return 0;
}
