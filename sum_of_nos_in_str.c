//Counting the sum of the numbers in the string
#include<stdio.h>
void main()
{
	char string[1000];
	int i,sum=0;
	printf("Enter the string:");
	scanf("%s",&string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]>=48 && string[i]<=57)
		{
			sum+=string[i]-48;
		}
	}
	printf("The sum of numbers in the given string: %d",sum);
}
