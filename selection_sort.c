//Selection sort
#include<stdio.h>
void main()
{
	int n,i,j,min,temp;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int array[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("The array before sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(array[j]<array[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=array[i];
			array[i]=array[min];
			array[min]=temp;
		}
	}
	printf("\nThe array after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	
}
