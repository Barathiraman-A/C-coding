//Reversing the given number
#include<stdio.h>
void main()
{
	int num,reverse=0,remainder;
	printf("Enter the number to be reversed:");
	scanf("%d",&num);
	while(num!=0)
	{
		remainder=num%10;
		reverse=remainder+(reverse*10);
		num=num/10;
	}
	printf("\nThe reversed number: %d",reverse);
}
