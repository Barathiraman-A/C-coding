//Finding leap year
#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year to find whether it is leap year or not:");
	scanf("%d",&year);
	if(year%4==0 || (year%100 && year%400==0))
	{
		printf("The given year %d is a leap year",year);
	}
	else
	{
		printf("The given year %d is not a leap year...it is an ordinary year",year);
	}
}
