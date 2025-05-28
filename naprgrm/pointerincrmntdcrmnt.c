#include<stdio.h>
int main()
{
    int a=10;//={1,2,3,4,5};
    printf("%d",++a);
    int *p;
    p=&a;
  //  p=a;;
    printf("addres of a=%d",&a);
    printf(" pre increment =%d\n",*(++p));
    printf("%d\n",*(++p));
    printf(" before p++=%d\n",*(p++));
    printf(" after incremnet %d\n",*p++);
   // p=&a[4];
     printf("post decrement1=%d\n",*p--);
    printf("post decrement2=%d\n",*p--);
     printf("pri decrement1=%d\n",*--p);
    printf("pri decrement2=%d\n",*--p);



    

}