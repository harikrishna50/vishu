#include<stdio.h>
int main()
{
    int i,n;
    int sum=0,mul=1;
   // int a[n];
   // printf("how many elements do you want:");
   // scanf("%d",&a[i]);
    printf("enter values:");
      scanf("%d",&n);
         int a[n]; 
         for(i=0;i<n;i++)
         {
            printf("enter values %d:",i+1);
            scanf("%d",&a[i]);
         }  
      for(i=0;i<n;i++)
      {
        if(a[i]%2==0)
      {
        sum+=a[i];
    }
       else 
       {
            mul*=a[i];
       }
    }
    printf(" addition  of even  numbers is %d\n:",sum);
     printf("multiplication of odd numbers is %d\n:",mul);
}