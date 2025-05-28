#include<stdio.h>
int main()
 {
   int a[4];
   int i;
   int sum=0,mul=1;
   printf("enter values;");
   for(i=0;i<3;i++)
   {
      scanf("%d",&a[i]);
   }
      for(i=0;i<3;i++)
   {
      
      if(a[i]%2==0)
      {
         sum=sum+a[i];
      }
      else
      { 
         mul=mul*a[i];
      }
            
   }
   printf("product is:%d",mul);
   printf(" sum is:%d\n",sum);
   
   }
   
   
 