#include<stdio.h>
int main()
{
    int n,r,pal;
    int rev=0;
    printf("enter a number:");
    scanf("%d",&n);
    pal=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
    if(pal==rev)
    {
        printf("palyndrone");
    }
    else
    {
        printf("not polyndrone:");
    }
}