#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a[3],n;  cin>>n;
		
		for(int i=0; i<3; i++)
		{
			cin>>a[i];
		}

		int mini = min({a[0], a[1], a[2]});

		cout<<n-mini<<endl;
	}

	return 0;
}
