#include<stdio.h>
int main()
{
    
    int i,n,rem;
    int sum=0;
    printf("enter values:");
    scanf("%d",&n);
            while(n>0)
            {
              rem=n%10;
            n=n/10;
            sum=sum+rem; 
            }
            printf("sum of digits:%d",sum);
}