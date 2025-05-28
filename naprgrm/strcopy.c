#include<stdio.h>
#include<string.h>
int main()
{ 
    int l1,l2,i,count=0;
    char s1[15]="krishna";
   // printf("fist s1%s\n",s1);
    char s2[8]="hari";
   printf(" 2nd s2%s\n",s2);
   strncat(s2,s1,3);//s2 lo unna fist 3leter matrame print avthai akada 3 ani petam kabatti.enkoti kuda undhi 'strcat'edhi use chesthe (s1,s2) thesukunte motham print avthundhi
   printf(" final s2is:%s",s2);
       // count=strlen(s1);
        //printf(" lenth of s1 is:%d",count);
    //     l1=strlen(s1);
    //     l2=strlen(s2);
    //     for(i=0;i<=l2;i++)   //
    //     {
    //         s1[l1+i]=s2[i];

    //    }
    //     printf("%s",s1);
}