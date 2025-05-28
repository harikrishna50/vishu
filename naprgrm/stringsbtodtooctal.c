#include<stdio.h>

int main()
{
    int num, opt;
    printf("Enter the decimal:");
    scanf("%d",&num);
    printf("1.bin\n 2. oct\n 3. hexa\n");
    printf("edo okati select chesuko brooo-");
    scanf("%d",&opt);
    switch(opt)
   {
        case 1:
        printf("bin equ is:");
        func(num,2);
        break;
        case 2:
        printf("oct equ is:");
        func(num,8);
        break;
        case 3:
        printf("hexa equ is:");
        func(num,16);
        break;
    }
    printf("\n");
}
func(int num, int b)
{
     int i=0, j ,rem;
    char arr[20];
    while(num>0)
   {      
     rem=num%b;
     num/=b;
     if(rem>9&&rem<16)
      arr[i++]=rem-10+'A' ;
     else
      arr[i++]=rem+0;
    }
 
    for(j=i-1;j>=0;j--)
    {
    printf("%c",arr[j]);
    }
}