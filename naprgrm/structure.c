#include<stdio.h>
struct stdnt{
    int roll;
    float marks;
    char name [20];

};
int main()
{
   struct stdnt s1={1,99.7,"hk"};
   struct stdnt s2;
   s2=s1;//={2,89.5,"h"};
   printf("info of s1\n");
   printf("%d %f %s\n",s1.roll,s1.marks,s1.name);
    printf("%info of s2\n");
   printf("%d %f %s",s2.roll,s2.marks,s2.name);
}