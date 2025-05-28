#include<stdio.h>
int main()
{
    int i,j,r1,c1;
    //int a[i][j];
    printf("enter rows and colums of matrix:");
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    printf("enter fist matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("fist matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose of matrix:\n");
     for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
    
}