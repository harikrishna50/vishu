#include<stdio.h>
int main()
{
    int a[5];
    int i,n;
    printf("enter size of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter array elemets:");
        scanf("%d",&a[i]);
    }
        for(i=n-1;i>=0;i--)
        {
        printf(" %d",a[i]);
        }
}       
            
    

