#include<stdio.h>
int main()
{
    char s1[20];
    char s2[15];
    printf("enter name 1:");
    gets(s1);
    printf("enter name 2:");
    gets(s2);
    
     int value,flag=0;
     int i=0;
  
    // value=strcmp(s1,s2);
    // if(value==0)
    // {
    //     printf("same");
    // }
    // else  
    // {
    //     printf("not same");
    // // }
    // while(s1[i]==s2[i])
    // {
    //     i++;
    //     printf("same");
    //      break;
    //      return 0;
    // }  
    // printf("not same");
     while(s1[i]!='\0'||s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            printf("not same ra");
            return 0;
        }
        i++;
    }
    printf("same");
    
    
}