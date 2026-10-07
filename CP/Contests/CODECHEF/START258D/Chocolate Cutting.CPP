#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int t; cin>>t;
        while(t--)
        {
            int n,m; cin>>m>>n;
            if(n%2==0 || m%2==0){
                cout<<"Yes\n";
            }
            else cout<<"No\n";
        }
}
