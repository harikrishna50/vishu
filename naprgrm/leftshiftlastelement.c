#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
   int last_element;//=a[2],a[3],a[4];
   for(i=last_element;i<=2;i++)
   {

   
    for(i=4;i>0;i--)
    {
      a[i]=a[i-1];
    }
    
    a[0]=last_element;
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
    
}
