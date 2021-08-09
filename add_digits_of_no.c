//Adding the digits of the given number
#include<stdio.h>
void main()
{
	int num,digit,sum=0;
	printf("Enter the number whose digits are to be added:");
	scanf("%d",&num);
	printf("\nThe result after adding the digits of the number %d:",num);
	while(num!=0)
	{
		digit=num%10;
		sum+=digit;
		num=num/10;
	}
	printf("%d",sum);
}
