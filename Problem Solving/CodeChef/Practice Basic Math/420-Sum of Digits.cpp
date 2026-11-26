#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t; cin>>t;
	while(t--)
	{
	    string a; cin>>a;
	    long long int sum=0;
	    for(int i=0; i<a.length(); i++)
	    {
	        sum+=a[i]-'0';
	    }
	    cout<<sum<<endl;
	}
    return 0;
}
