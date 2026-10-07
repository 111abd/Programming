#include <iostream>
using namespace std;

int main() 
{
    int n,d,k=0,j; cin>>n>>d;
    int a[n]; int u=n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]; //cout<<a[i];
    }

    int x[u]; int cnt=0,f=0;int gn=0;

    for(int i=0; i<n;i++)
    {
        for(j=0; j<n; j++)
        {
            if(i!=j){
                if(abs(a[i]-a[j]) < d)
                {                 
                // cout<<"\niff "<<a[i]<<" i="<<i<<" j="<<j<<endl;
                // f=0; 
                 break;
                }

                else 
                {
                  // cout<<"else "<<a[i]<<" i="<<i<<" j="<<j;
                  //f=1;  
                  gn++;
                  if((gn==n-1)  )
                  {
                   cnt++;
                   x[k]=i+1; k++; f=1; //j++;
                  } 
                  // cout<<" gn=,"<<gn<<" ,cnt="<<cnt<<endl;
                }
            }
            
        } gn=0;

    }
    if(f)
    {
        cout<<cnt<<endl;
        for(int i=0; i<cnt; i++)
        {
            cout<<x[i]<<" ";
        }
    }
    else cout<<0;
    
    return 0;
}
