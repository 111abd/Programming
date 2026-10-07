#include <bits/stdc++.h>
using namespace std;

int main()
{

 int x,y,l,r,a,b; cin>>x>>y>>l>>r>>a>>b;
 int cst=0, cst1=0,cst2=0;
 
 for(int i=a; i<=b-1; i++)
 {
    if(i>=l && i<=r-1){
        cst1++; 
    }
    else {cst2++; 
    }
 }
 cst= cst1*x + cst2*y; cout<<cst<<"\n";

    return 0;
}
