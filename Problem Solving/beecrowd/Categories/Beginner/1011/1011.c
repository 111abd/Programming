#include <stdio.h>
int main()
{
    double r; scanf("%lf",&r);
    
    double area = 4.0/3 * 3.14159 * (r*r*r);
    
    printf("VOLUME = %.3f\n",area);
    return 0;
}
