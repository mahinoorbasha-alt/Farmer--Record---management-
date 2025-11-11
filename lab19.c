/*#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swapp(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("after call by value swap:a=%d\tb=%d\t\n",a,b);
}
int main()
{
    int a=10,b=20;
    printf("brfore swap:a=%d\tb=%d\n",a,b);
    swapp(a,b);
    printf("after callswap:a=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("after swap:a=%d,b=%d\n"a,b);
}
#include<stdio.h>
int main()
{
    int a[100],b;
    printf("enter the noof elements in a rray=");
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        printf("enter the elements%d=",i+1);
        scanf("%d",&a[i]);
    }
    printf("the array elements are\n");
    for(int i=0;i<b;i++)
    {
        printf("%d\n",a[i]);

    }
    int *p=a;c=0;
    for(int i=0;i<b;i++)
    {
        c=c+*(p+i);
    }
    printf("the sum of elements of array s%d\n",c);
}*/
#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("the address of a =%p\n",&a);
    printf("the address of a =%p\n",p);
    printf("the address of p =%p\n",q);
    printf("the value of p =%p\n",*q);
    printf("the value of a =%d\n",a);
    printf("the value of a =%d\n",**q);


}
