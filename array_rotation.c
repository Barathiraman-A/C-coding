#include<stdio.h>
void main()
{
	int a[100],i,n,rot,temp,count=1;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number of rotations:");
	scanf("%d",&rot);	
	while(rot>=1)
	{
		temp=a[n-1];
		for(i=n-1;i>=0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=temp;
		a[n]="\0";
		printf("\nAfter %d rotations:",count);
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		rot--;
		count++;
	}
}
