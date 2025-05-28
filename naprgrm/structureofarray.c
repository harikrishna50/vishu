#include<stdio.h>
struct stdnt{
    int roll;
    char name;
    float marks;

};
int main()
{
    struct stdnt s[3];
    
    for(int i=0;i<3;i++)
    {
        printf("enter the student detail:");
        scanf("%d %s %f",&s[i].roll,&s[i].name,&s[i].marks);
    }
     for(int i=0;i<3;i++)
    {
        printf("%d\n %s\n %f\n",s[i].roll,s[i].name,s[i].marks);
    }

}