#include <stdio.h>
int main()
{
    char ar[50];
    scanf("%s",ar);
    double a,b; 
    scanf("%lf %lf",&a,&b);

    double salary = a+ (b*0.15);

    printf("TOTAL = R$ %0.2f\n",(salary)) ;
    return 0;
}

