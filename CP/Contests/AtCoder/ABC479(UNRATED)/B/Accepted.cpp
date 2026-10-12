#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n; 
    string a;cin>>a;

    int sum=0;
    
    set<int> s;

    for(int i=0; i<n; i++)
    {
      if(a[i]=='R' && n==1)
      {
        s.insert(1); break;
      }

      if(a[i]=='R')
        {
            sum++;
            s.insert(sum);
        }
        else
        {
            if(sum>0)
            {
            s.insert(sum);
            sum=0;
            }          
        }
    }
    // cout<<sum<<endl;
    // for(auto i: s) cout<<i<<" ";    
    
     if(s.empty())cout<<0<<endl;

    else cout<<*s.rbegin()<<endl;

    return 0;
}
