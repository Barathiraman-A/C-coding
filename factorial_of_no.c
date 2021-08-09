//Factorial of the number
#include<stdio.h>
void main()
{
	int number,i,fact=1;
	printf("Enter the number to find the factorial:");
	scanf("%d",&number);
	for(i=number;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("\nThe factorial of the number %d : %d",number,fact);
}
