/*#include<stdio.h>
int main()
{
   int a[10][10],b[10][10],sum[10][10];
   int i,j,rows,cols;
   printf("enter no.of rows and cols:");
   scanf("%d %d",&rows,&cols);
   printf("enter elements of first matrix:\n");
   for(i=0;i<rows;i++)
   {

    for(j=0;j<cols;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }
   printf("enter elements of second matrix:\n");
   for(i=0;i<rows;i++)
   {
    for(j=0;j<cols;j++)
    {
        scanf("%d",&b[i][j]);
    }
   }
   for(i=0;i<rows;i++)
   {
    for(j=0;j<cols;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
   }
   printf("\nsum of two matrices:\n");
   for(i=0;i<rows;i++)
   {
    for(j=0;j<cols;j++)
    {
        printf("%d",sum[i][j]);
    }
    printf("\n");
   }


    
}
//transpose
#include<stdio.h>
int main()
{
    int a[3][2],transpose[2][3];
    int i,j;
    printf("enter the elements of 3*2 matrix: \n");
    for(i=0;i<3;i++)
    { 
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            transpose[j][i]=a[i][j];
            
        }
    }
    printf("transpose of matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",transpose[i][j]);

            
        }
        printf("\n");  
    }
}*/
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter the elements of 3*3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sum=sum+a[i][i];
    }
    printf("\n sum of diagonls=%d",sum);
}
