#include <bits/stdc++.h>
using namespace std;

int main() {
      string a,b; cin>>a>>b; //cout<<a<<b<<endl;
    
    for(auto &i: a)
    {
        if(i>='A' && i<='Z')
        {
            i=i+32;
        }
       // cout<<i<<" ";
    }//cout<<endl;
    for(auto &i: b)
    {
        if(i>='A' && i<='Z')
        {
            i=i+32;
        }
        //cout<<i<<" ";
    }
    if(a==b)  {cout<<"0"<<endl;}
    else if(a<b){cout<<"-1"<<endl;}
    else  {cout<<"1"<<endl;}
    

    return 0;
}
