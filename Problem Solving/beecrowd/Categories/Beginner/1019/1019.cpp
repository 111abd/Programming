#include <iostream>
using namespace std;

int main()
{
    int a , b=60;
    cin>>a;
    
    int div1 = a / b; 
    int mod1 = a % b; 
    
    int div2 = div1 / 60; 
    int mod2 = div1 % 60; 

    cout<<div2<<":"<<mod2<<":"<<mod1<<"\n";

	return 0;
}
