#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string a; cin>>a;
    string b="r"; string c="er";
        if(a[a.length()-1] == 'e')
    {
        a=a+b;
        cout<<a<<endl;
    }
    else {
      a=a+c; 
     cout<<a<<endl;}
    

    return 0;
}
