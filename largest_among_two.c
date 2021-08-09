#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers to find the largest:");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("The largest number is a=%d",a);
	}
	else 
	{
		printf("The largest number is b=%d",b);
	}
}
