#include <stdio.h>

int main() 
{
    int a , b=365;
    scanf("%d", &a); 
   
    
    int div1 = a / b; 
    int mod1 = a % b; 
    
    int div2 = mod1 / 30; 
    int mod2 = mod1 % 30; 
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", div1, div2, mod2);
   
    return 0;    
}
