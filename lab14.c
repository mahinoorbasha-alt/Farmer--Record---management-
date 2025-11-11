/*#include<stdio.h>
int main()
{
    int n=5;
    int coef=1;
    for(int i=0;i<=n;i++)
    {
        for(int sp=n;sp>=i;sp--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            if(i==0||j==0)
            {
                coef=1;
            }
            else
            {
                coef=coef*((i-j)+1)/j;
            }
            printf("%d ",coef);
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int sp=n;sp>=i;sp--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(int k=i-1;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    
}*/
#include<stdio.h>
int main(){
    int n,i,j,k,divisor;
    printf("enter the value of n");
    scanf("%d",&n);
    int current_prime=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j>=n+i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            while(1)
            {
                int is_prime=1;
                for(divisor=2;divisor*divisor<=current_prime;divisor++)
                {
                    if(current_prime%divisor==0)
                    {
                        is_prime=0;
                        break;
                    }
                    if(is_prime)
                    {
                        printf("%d",current_prime);
                        current_prime++;
                        break;
                    }
                    current_prime++;
                }
            }
            printf("\n");
        }
    }
}