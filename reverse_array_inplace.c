//Reversing an array in-place
#include<stdio.h>
void main()
{
	int n,i,j,temp;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array after reversing:");
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
