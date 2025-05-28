#include<stdio.h>
int main()
{
    int i,max,min;
     int a[5];
       for(i=0;i<5;i++)
    {
        printf("enter elemts:");
        scanf("%d",&a[i]);
        
    }
    printf("entered elemts:");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
        
        
    }
    max=min=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
       { max=a[i];
        //min=a[0];
       }
       if(a[i]<min)
       { 
        min=a[i];
       }
       
    }
    printf("max=%d",max);
    printf("min=%d",min);

     
        
    }
   