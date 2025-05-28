#include<stdio.h>
int main()
{
  //   int a=10;
  //   float b=4.5;
  //  float *p2=&b;
  // int  *p1=&a;
  //   printf("value p1= addres ofa= %d\n",&a);
  //   printf("values of b=addres of b= %d\n",&b);
  //   printf("addres of p1= %u\n",&p1);
  // //printf("vadres of p1=\n",&p1);
  // printf("vadres of p2=%u ",&p2);
  int a=10,b=5;int *p;
    
    
     printf(" value oof a=%d\n",a);
     p=&a;
     printf("value ofp= %d\n",*p);
     *p=a;
     printf("valu of p=%d\n",*p);
   printf(" value of p is=%d\n",*p);
   printf("addres of a =%d\n",&a);
   printf("%addres of a=%u\n",*p);
  *p=&a;
  printf("value of p is =%d\n",*p);
  printf("addres of p=%u\n",&p);
  p=&a,&b;
  printf("%value of p=%d\n",*p);
  p=(&a,&b);
  printf("value of p=%d",*p);
  

}
