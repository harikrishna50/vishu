#include<stdio.h>
 #include<string.h>
 int main()
 {
    int count=0,i=0;
    char name[30];
    printf("enter name:");
    gets(name);
    count=strlen(name);                  // 0 1 2 3
   printf("string lenth is:%d",count); //s1=h a r i \0
    while(name[i]!='\0')
    {                                      //count 
        count++;
         //i;
    }
    //printf("%d",count);
   
   // for(i=0;i<=name[i];i++)
   // {
   //    count++;
   // }
   // printf("count %d",count);

 }