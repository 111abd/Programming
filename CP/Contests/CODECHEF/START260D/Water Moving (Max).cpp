#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k; 

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n, greater<int>());
      
    if(k>=n){k=n-1;} 

    int j=0;
    for( j=j+1; j<=k ; j++)
    {
        a[0]+=a[j];
    }
    cout<<a[0]<<endl;
    }

    return 0;
}
