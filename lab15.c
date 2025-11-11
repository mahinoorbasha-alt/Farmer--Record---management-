/*#include<stdio.h>
int main()
{
    int n=5;
    int a[5]={1,7,3,9,5};
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n 2nd smallest element=%d",a[1]);
    printf("\n 2nd largest element=%d",a[n-2]);
}
#include<stdio.h>
int main()
{
    int n,i;
    int sum=0,product=1;
    int arr[100];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    printf("\n sum of array elements=%d",sum);
    printf("\n product of arrauy elements=%d\n",product);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,i,j,arr[100];
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter %delemnts:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("duplicate elements are:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d",arr[i]);
                break;
            }
        }

    }
}

