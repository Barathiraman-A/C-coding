//removing duplicates in a sorted array
//wrong output
#include<stdio.h>
void main()
{
	int n,i,j,k,temp,count=0;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int array[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
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
	printf("\nThe sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\nAfter removing duplicates from the array:\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]==array[j])
			{
				for(k=j;k<n;k++)
				{
					array[k]=array[k+1];
				}
				count++;
			}
		}
	}
	//array[n-count]='\0';
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n%d duplicates have been removed from the array",count);
}
