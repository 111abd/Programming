#include <stdio.h>

int main()
{
    int a,b, p,q;
    double c,d;
    
    scanf("%d %d %lf",&a,&b,&c);
    scanf("%d %d %lf",&p,&q,&d);

    float total= (b*c) + (q*d);

    printf("VALOR A PAGAR: R$ %.2lf\n",(total));

    return 0;
}

