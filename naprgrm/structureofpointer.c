#include<stdio.h>
struct stdnt{
    int roll;
    char name[20];
    float marks;
};
int main()
{
     struct stdnt s1={1,"hari",99.5};
     struct stdnt *ptr=&s1;
   printf("info of s1");
   printf("%d %s %f",ptr->roll,ptr->name,ptr-> marks);
    printf("%d %s %f",(*ptr).roll,(*ptr).name,(*ptr). marks);
}
  