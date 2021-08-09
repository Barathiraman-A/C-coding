//counting the pairs of elements with the given sum
#include<stdio.h>
void main()
{
	int i,j,n,sum,count=0;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the sum:");
	scanf("%d",&sum);
	printf("The pairs whose sum is equal to the given sum:");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==sum)
			{
				printf("(%d,%d)\t",a[i],a[j]);
				count++;
			}
		}
	}
	printf("\nThe total number of pairs is %d",count);
}
