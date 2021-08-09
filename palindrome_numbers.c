//checking whether the given number is palindrome or not
#include<stdio.h>
void main()
{
	int num,reverse=0,remainder,n;
	printf("Enter the number to be reversed:");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		remainder=num%10;
		reverse=remainder+(reverse*10);
		num=num/10;
	}
	if(n==reverse)
	{
		printf("\nThe given string is palindrome");
	}
	else
	{
		printf("\nThe given string is not a palindrome");
	}
}
