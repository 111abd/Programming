#include <stdio.h>
#include <string.h>
int main()
{
  int n; scanf("%d ",&n);
  
  //gets();
  
 char a[101];
 int i;
 
  for (int i=1; i<= n; i++)
  {
     
     gets(a);
     printf("\n");
   
   int len=strlen(a); //printf("len: %d\n", len);
 
    if (len<=10)
    {
        printf("%s", a);
    }
   
    if (len>10)
    {
     printf("%c", a[0]);
     
     int count=0;
     int lenn=len-2;
     
      for (int i=1; i<=lenn; i++)
       {
         count++;
         // printf("%c",a[i]);
     
       }
       printf("%d",count);
   
       printf("%c",a[len-1]);
       
       printf("\n");

    }
  }
  

    
   
 return 0;   
}
