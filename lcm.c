//Finding the LCM and GCD of the given two numbers
#include<stdio.h>
void main()
{
	int num1,num2,i,gcd,lcm;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	for(i=1;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
		}
	}
	lcm=(num1*num2)/gcd;
	printf("The lcm of given two numbers is %d",lcm);
	printf("\nThe gcd of the given numbers is %d",gcd);
}
