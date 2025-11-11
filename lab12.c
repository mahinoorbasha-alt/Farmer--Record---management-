//given number is even or odd
/*#include<stdio.h>
int main()
{
    
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the given number is even");

    }
    else
    {
        printf("the number is odd");
    }

} 

#include<stdio.h>
int main()
{
	float a=5000,amount;
	int pin=1234,epin;
	printf("enter the epin");
	scanf("%d",&epin);
	if(epin==pin)
	{
		printf("enter amount");
		scanf("%f",&amount);
		if(amount<=a)
		{
			a=a-amount;
			printf("withdrawl is %f",amount);
			printf("balance %f",a);
		}
		else
		{
			printf("insufficient balance ");
		}
	}
	else
	{
		printf("correct pin");
	}
}*/
#include<stdio.h>
int main()
{
    float amount,discount,total;
    printf("enter the total amount of items;");
    scanf("%f",&amount);
    if(amount>5000)
    {
        discount=amount*0.10;
        total=amount-discount;
        printf("you got a discount of rs%2f\n",discount);


    }
    else{
        discount=0;
        total=amount;
        printf("no discount applied\n");
    }
    printf("total amount to be paid:RS%2f\n",total);
    
}
