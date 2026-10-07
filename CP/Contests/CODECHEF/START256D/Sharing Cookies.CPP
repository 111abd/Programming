#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<234<<endl;
    int a,b; cin>>a>>b;

    int sum = a+b; int tar = a/2;
    if(sum%2 != 0){
        cout<<-1<<endl;
    }
    else{ int x,y;
        for(int i=1; i<=tar; i++)
        {
           x=a-i;  y=b+i; //cout<<a<<"-a-b- "<<b<<endl;
            if(x==y) 
            {cout<<i<<endl; break;}
            //x=a; y=b;
        }
       // cout<<1;
    }
    return 0;
}
