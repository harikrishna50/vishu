#include<stdio.h>
int main()
{
    int i,n,m;
    printf("enter values:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    printf("enter elements:");
    scanf("%d",&a[i]);
    }
     printf("enter how many elements reverse:");
    scanf("%d",&m);
    for(i=m-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    
}