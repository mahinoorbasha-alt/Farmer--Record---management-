/*#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
    if(n<0)
        return -1;
    if(n==0)
        return 1;
    return(n *factorial(n-1));
}
    void main()
    {
        int fact=0;
        fact=factorial(5);
        printf("\n factorial of 5 is%d",fact);
        getch();
    }

#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
int main()
{
    int n,i;
    printf("enter the number of terms for fibonacci series");
    scanf("%d",&n);
    printf("fibonacci series");
    for(i=0;i<n;i++)
    {
        printf("%d",fibonacci(i));
    }
    printf("\n");
    return 0;
}*/
#include<stdio.h>
int sumofnaturalnumbers(int n)
{
    if(n<=0)
    {
        return 0;

    }
    else{
        return(n+sumofnaturalnumbers(n-1));
    }
}
int main()
{
    int n;
    printf("enter a postive integer");
    scanf("%d",&n);
    printf("sum of first %d natural numbers%d\n",n,sumofnaturalnumbers(n));
    return 0;
}