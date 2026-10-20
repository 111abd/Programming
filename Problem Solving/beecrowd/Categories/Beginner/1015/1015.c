#include <stdio.h>
#include <math.h>
int main()
{
   float x1,y1,x2,y2;

   scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

   float a= x2-x1;
   float b= y2-y1;
  
   printf("%.4f\n",sqrt(a*a+ b*b));
  
    return 0;
}
