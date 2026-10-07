#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
string a,b; cin>>a; 
//cout<<a<<endl;
//cout<<a.length()<<endl;
int n= a.length()+(a.length()-1);
//cout<<n;
// for(int i=0; i<n; i++) cin>>a[i];
// for(int i=0; i<n; i++) cin>>b[i];
// for(int i=0; i<n; i++) cout<<a[i]<<" ";
// cout<<endl;for(int i=0; i<n; i++) cout<<b[i]<<" ";
// cout<<endl;
int j=0;
b.resize(n);
for(int i=0; i<n; i++)
{
    if(i>0 && (i%2 != 0))
    {
        
        b[i]='o';
    }
    else {b[i]=a[j]; j++;}
}

cout<<b<<endl;

return 0;
}
