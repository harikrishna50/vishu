#include<stdio.h>
 int main()
 {
   int a,b,c,n;
   printf("enter number:");
   scanf("%d",&n);
   a=0;b=1;
   
   printf("%d\n%d\n",a,b);
   for(c=1;c<n;c++)
   {
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
    c=a+b;
    
   }
   
 }