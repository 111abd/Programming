#include <stdio.h>

int main() 
{
    int a , b=60;
    scanf("%d", &a); 
    
    int div1 = a / b; 
    int mod1 = a % b; 
    
    int div2 = div1 / 60; 
    int mod2 = div1 % 60; 

    printf("%d:%d:%d\n", div2, mod2, mod1);
   
    return 0;    
}         

