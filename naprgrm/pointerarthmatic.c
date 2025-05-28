#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int d;
    // printf("enter array  of elements:");
    // for(i=0;i<10;i++)
    // {
    //     scanf("%d",a);
    // }
    //     printf("entered elemnets are =%d",a[i]);
     int *p,*q;
     p=&a[1];
     //q=&a[2];
    // p=p+q;
     // printf("value of p+q=%d",*p);
     
     //printf("value ofp=%d\n",*p);
    //p=p-2;
     //printf("p-2:p=%d\n",*p);
     q=&a[0];
     printf("value of p= %d\n",*p);
     printf("value of q= %d\n",*q);
     printf("%d %d %d",(*p)++,*p++,*++p);
     q=p+3;
     printf("%d\n",*q-3);
     printf("%d\n",*--p+3);
     printf("%d\n",*p+*q);

     //printf("q=%d\n",*q);
  //  d=p-q;
  //    printf(" p-q=%d",d);
    
    // printf(" value is=%d\n",*p);
    // printf(" addres of p1=%u\n",p);
    // p=p+2;
    // printf("value ofp2=%d\n",*p);
    // printf("adres of p3 =%u\n",p);
    // int *q=&a[3];
    // printf("value of q1=%d\n",*q);
    // d=p-q;
    // printf(" value ofd d1=%d\n",d);
    //*q=3;
    // printf(" value of q2=%d\n",*q);
    // q=q-2;
    // printf(" value ofq-1=%d",*q);
    



}