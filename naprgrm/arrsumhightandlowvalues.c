#include<stdio.h>
int main()
{
    int i,max,min,sum;
    int a[4]={1,2,3,4};
    max=min=a[0];
    for(i=0;i<4;i++)
    {
        if(a[i]<min)
        {
             min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
   }
   printf("min=%d\n",min);
   printf("max=%d\n",max);
   sum=min+max;
   printf(" sum=%d",sum);

}