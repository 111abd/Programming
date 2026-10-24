#include <stdio.h>

int main() {
    int t;scanf("%d",&t);
    
    int a,b,c,i;
    for (i=0; i<t; i++)
    {
      scanf("%d %d %d",&a,&b,&c);
      //printf("%d %d %d",a,b,c);
      
      float avg= (a*1.0+b)/2;
      //printf("%f\n", avg);
      
      if (avg > c)
      {
        printf("YES\n");
      }
      
      else printf("NO\n");
    }
    return 0;
}
