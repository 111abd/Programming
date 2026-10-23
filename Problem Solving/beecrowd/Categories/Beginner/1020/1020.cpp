#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int a , b=365;
    cin>>a;
    
    int div1 = a / b; 
    int mod1 = a % b; 
    
    int div2 = mod1 / 30; 
    int mod2 = mod1 % 30; 

   cout<<div1<<" ano(s)\n";
   cout<<div2<<" mes(es)\n";
    cout<<mod2<<" dia(s)\n";
   

	return 0;
}


   
 
