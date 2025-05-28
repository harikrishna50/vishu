#include<stdio.h>
int main()
{
    int a[2][3];
    int b[2][3];
    int c[2][3];
    int i,j;
    printf("enter fist matrix");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<3;j++)
      {  
      scanf("%d ",&a[i][j]);
      
      }
    } 
        
     printf("enter 2nd matrix");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<3;j++)
      {  
      scanf("%d ",&b[i][j]);
      }
    }
      printf("1st matrix is:\n");
  
    for(i=0;i<2;i++)
    { 
        for(j=0;j<3;j++)
      {  
      printf("%d ",a[i][j]);

      }
      printf("\n");
    }
    printf("2nd matrix is:\n");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<3;j++)
      {  
      printf("%d ",b[i][j]);
      }
      printf("\n");
    }
        
    printf("3rd matrix is:\n");
    printf("addition\n");
         for(i=0;i<2;i++)
   {
    
        for(j=0;j<3;j++)
      {  
        c[i][j]=a[i][j]+b[i][j]; 
          printf("%d ",c[i][j]);
     
      }
       printf("\n");
    }
       
}