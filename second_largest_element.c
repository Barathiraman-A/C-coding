#include<stdio.h>
void main()
{
	int arr[100],n,i,max1,max2;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max1=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max1)
		{
			max1=arr[i];
		}
	}
	max2=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max2 && arr[i]!=max1)
		{
			max2=arr[i];
		}
	}
	printf("The second largest element in the array is %d",max2);
}
