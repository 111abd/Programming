#include <iostream>
using namespace std;

int main() 
{
    int n; cin>>n; 
    int a[n];
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

        if(i%2!=0)
        {
            sum+=a[i];
        }
    }
    cout<<sum;
    
    return 0;
}
