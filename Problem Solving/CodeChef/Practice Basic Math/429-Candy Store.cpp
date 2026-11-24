#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,s;
        cin>>g>>s;
        
        if(g>=s)
        {
            cout<<s<<endl;
        }
        else
        {
            int a = (s-g)*2;
            cout<<g+a<<endl;
        }
    }

}
