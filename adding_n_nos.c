//Adding n numbers without using array
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	int data;
	printf("Enter the range of numbers to be added:");
	scanf("%d",&n);
	printf("Enter the numbers to be added:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		sum+=data;
	}
	printf("\nThe sum of %d numbers:%d",n,sum);
}
