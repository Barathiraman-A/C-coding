//Armstrong number
#include<stdio.h>
#include<math.h>
void main()
{
	int number,result=0,remainder,i,n,digits=0;
	printf("Enter the number to check whether it is armstrong or not:");
	scanf("%d",&number);
	n=number;
	while(n!=0)
	{
		remainder=n%10;
		n=n/10;
		digits++;
	}
	n=number;
	while(n!=0)
	{
		remainder=n%10;
		result+=pow(remainder,digits);
		n=n/10;
	}
	if(number==result)
	{
		printf("The given number %d is an armstrong number",number);
	}
	else
	{
		printf("The given number %d is not an armstrong number",number);
	}
}

