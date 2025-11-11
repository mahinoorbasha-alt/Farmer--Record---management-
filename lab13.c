/*
//prime numbers upto n
#include<stdio.h>
int main()
{
	int c;
	for(int i=1;i<=10;i++)
	{
		c=0;
		for(int j=1;j<=i;j++)
		{
		
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			printf("%d ",i);
		}
	}
}
#include<stdio.h>
int main()
{
	int num,orginal,reverse=0,remainder;
	num=121;
	orginal=num;
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		num=num/10;
	}
	if(orginal==reverse)
		{
			printf("%d is a palindrome.\n",orginal);
		}
	else{
		printf("%d is not palindrome\n",orginal);
	} 

}
*/
#include<stdio.h>
int main(){
	int num,rev=0,rem;
	printf("enter a number");
	scanf("%d",&num);
	do{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;

	}
	while(num!=0);
	printf("Reversed number=%d\n",rev);
}
