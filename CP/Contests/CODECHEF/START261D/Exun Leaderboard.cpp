#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int x,y; cin>>x>>y;

    if(x<y)
    {
        cout<<y-x-1;
    }
    else if ( x>y)
    {
        cout<<x-y-1;
    }
    else if( abs(x-y) == 1) {cout<<0;}
    return 0;
}
