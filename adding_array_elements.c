//Adding numbers using array
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("The sum of the array elements: %d",sum);
}
