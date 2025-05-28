#include<stdio.h>
int main()
    {
        int i,j,k,r1,c1,r2,c2,r3,c3;
       
        //int a[i][j];
        printf("enter rows and colums fist matrix:");
        scanf("%d%d",&r1,&c1);
        printf("enter fist matirx:");
        int a[r1][c1];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
             
        }
        
        printf("fist matix is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)                                      
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        } 
        printf("enter rows aand colyms of 2nd matiox:");
        scanf("%d%d",&r2,&c2);
         
        printf("enter 2nd matirx:");
        int b[r2][c2];        
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf(" 2nd matix is :\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)                                      
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
       
        }



        printf("third matrix:\n");

        //int c[r3][c3];
        int c[r1][c2];

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                // for(k=0;k<r1;k++)
                // {
                //     c[i][j]+=a[i][k]*b[k][j];
                // }
            }
        }

        printf("multiplication:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];

                    //printf("%d",c[i][j]);
                }
                //printf("\n");
            }
        }

        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++) 
            {
                printf("%d ", c[i][j]);
            }

            printf("\n");
        }

    return 0; 
        
}