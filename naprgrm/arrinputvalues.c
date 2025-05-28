#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<3;i++)
    {
        printf("enter values:");
        scanf("%d",&a[i]);
    }
    printf("entered elements are:\n");
    for(i=0;i<3;i++)
    {
        
        printf("%d ",a[i]);
        
    }
}