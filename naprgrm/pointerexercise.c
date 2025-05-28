#include<stdio.h>
int main()
{
    // int a=5,*P;
    // P=&a;
    // printf("enter input number:");
    // scanf("%d",*P);
    // printf("%d %d\n",a,*P);
    int a[5]={1,2,3,4,5},*p;
    for(p=&a[0];p<a;p++)
    {
        printf("%d",*p);
    }


}