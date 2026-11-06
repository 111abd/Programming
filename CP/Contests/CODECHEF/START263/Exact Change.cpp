#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    
    int cnt=0;
    if(n>=5)
    {
        cnt = (n-5)+1;
    }
    else{
        cnt = n;
    }
    cout<<cnt<<endl;

}
