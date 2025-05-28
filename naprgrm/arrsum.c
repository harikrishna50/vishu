#include<stdio.h>
int main()
{
    int a[5],i,sum;
    for(i=0;i<5;i++)
    {
        printf("eneter vales:");
        scanf("%d",a[i]);
        for(i=0;i<5;i++)
        {
            sum+=a[i];
        }
        printf("%d",a[i]);
    }
}