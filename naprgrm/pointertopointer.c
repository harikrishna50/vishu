#include<stdio.h>
int main()
 {
     int x=10;
    int *p,**q;
    p=&x;
    printf("addres of x1=%d\n",&x);
    printf("addres of p2=%u\n",&p);
    printf("value of p3=addres of x  %d %d\n",x,p);
    *p=x;
    printf("value of *p4=%d\n",*p);
   // *p=&x;
     printf("addres of q8=%u\n",&q);
    //int x=10;
    //int * p=&x;
    printf("value of x1=%d\n",*p);
    q=&p;    
    printf("value of x2=%d",*q);    
}