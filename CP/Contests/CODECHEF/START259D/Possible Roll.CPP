#include <iostream>
using namespace std;

int main() 
{
    int x,k,y; cin>>x>>k>>y;

    for(int i=1; i<=x; i++)
    {
        int sum= i*k;
        if(sum==y)
        {
            cout<<"YES\n"; break;
        }
        else if(i==x && sum!=y){
            cout<<"NO\n"; break;
        }
    }
    return 0;
}
