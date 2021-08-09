//Bubble sort
#include<stdio.h>
void main()
{
	int n,i,j,temp;
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
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\nThe array after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}
