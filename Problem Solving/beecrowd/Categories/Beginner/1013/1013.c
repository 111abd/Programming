#include <stdio.h>
#include <math.h>
int main()
{
   int  x1,y1,x2;

   scanf("%d%d%d",&x1,&y1,&x2);

   if (x1 >= y1 && x1>= x2)
    {
    printf("%d eh o maior\n", x1);
   }

   else if (y1 >= x1 && y1>= x2)
    {
    printf("%d eh o maior\n", y1);
   }

   else if (x2 >= x1 && x2>= y1)
   {
       printf("%d eh o maior\n",x2);
   }
return 0;
}
