/*#include<stdio.h>
int main()
{
    printf("hello world");
}
    
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    return 0;

}*/
#include<stdio.h>
int main()
{
    int a=10,b=5,temp;
    printf("before swaping:a=%d,b=%d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping:a=%d,b=%d \n",a,b);
    return 0;
}

